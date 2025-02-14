import paho.mqtt.client as mqtt
import json
import gspread
from oauth2client.service_account import ServiceAccountCredentials
import time

# Google Sheets Setup
SCOPES = ["https://spreadsheets.google.com/feeds", "https://www.googleapis.com/auth/drive"]
CREDENTIALS_FILE = "kredensial.json"  # Ganti dengan file kredensial Anda
SPREADSHEET_NAME = "IoT Data"  # Ganti dengan nama spreadsheet Anda

# Inisialisasi koneksi Google Sheets
credentials = ServiceAccountCredentials.from_json_keyfile_name(CREDENTIALS_FILE, SCOPES)
gc = gspread.authorize(credentials)
sheet = gc.open(SPREADSHEET_NAME).sheet1  # Menggunakan sheet pertama

# MQTT Setup
MQTT_BROKER = "test.mosquitto.org"
MQTT_TOPICS = ["ammar/dht", "ihsan/dht"]
received_data = {}

def on_connect(client, userdata, flags, rc):
    print(f"Connected to MQTT Broker with result code {rc}")
    for topic in MQTT_TOPICS:
        client.subscribe(topic)
        print(f"Subscribed to {topic}")

def on_message(client, userdata, msg):
    global received_data
    try:
        payload = json.loads(msg.payload.decode("utf-8"))
        received_data[msg.topic] = payload
        print(f"Received from {msg.topic}: {payload}")
        save_to_google_sheets(msg.topic, payload)  # Simpan data langsung ke Google Sheets
    except json.JSONDecodeError:
        print(f"Invalid JSON received from {msg.topic}")

def save_to_google_sheets(topic, data):
    """Simpan data dari masing-masing sensor ke Google Sheets"""
    timestamp = time.strftime("%Y-%m-%d %H:%M:%S")  # Waktu saat data diterima
    temperature = data.get("temperature", "N/A")
    humidity = data.get("humidity", "N/A")

    sheet.append_row([timestamp, topic, temperature, humidity])
    print(f"Data dari {topic} disimpan ke Google Sheets.")

def calculate_and_send():
    """Hitung rata-rata suhu dan kelembaban, lalu kirim ke Google Sheets"""
    if len(received_data) == len(MQTT_TOPICS):  # Pastikan semua data diterima
        avg_temp = sum(d["temperature"] for d in received_data.values()) / len(received_data)
        avg_hum = sum(d["humidity"] for d in received_data.values()) / len(received_data)

        timestamp = time.strftime("%Y-%m-%d %H:%M:%S")  # Waktu saat rata-rata dihitung
        sheet.append_row([timestamp, "Rata-rata", avg_temp, avg_hum])
        
        print(f"Rata-rata - Suhu: {avg_temp:.2f}°C, Kelembaban: {avg_hum:.2f}% disimpan ke Google Sheets.")
        received_data.clear()  # Reset data setelah dikirim

# Inisialisasi MQTT Client
client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect(MQTT_BROKER, 1883, 60)
client.loop_start()

try:
    while True:
        calculate_and_send()
        time.sleep(10)  # Tunggu 10 detik sebelum menghitung rata-rata lagi
except KeyboardInterrupt:
    print("Stopping...")
    client.loop_stop()
    client.disconnect()
