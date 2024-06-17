echo -n "Nama file untuk penyimpanan flask: "
read file

echo -n "Nama aplikasi yang di buat: "
read app

mkdir $file
cd $file

# Membuat virtual environment
python3 -m venv venv

# Menginstal Flask
pip install Flask

# Membuat file requirements.txt
echo "Flask" > requirements.txt

# Membuat file app.py
cat <<EOL > $app
from flask import Flask

app = Flask(__name__)

@app.route("/")
def hello_world():
    return "<p>Hello, World!</p>"
EOL

# Pesan sukses
echo "Proyek Flask '$file' berhasil dibuat."