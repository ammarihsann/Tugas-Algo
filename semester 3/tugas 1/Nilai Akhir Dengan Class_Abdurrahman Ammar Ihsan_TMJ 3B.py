class mahasiswa:
    def __init__(self, nama, nilai):
        self.nama = nama
        self.nilai = nilai

    def nilai_akhir(self):
        print(30 * "=")
        print(f"Nama : {self.nama}")
        print(f"Nilai : {self.nilai}")
        if self.nilai >= 81 and self.nilai <= 100:
            print("Huruf Mutu : A")
            print("Sebutan Mutu : Sangat Istimewa")
            print("Angka Mutu : 4")
            print(30 * "=")
        elif self.nilai >= 76 and self.nilai <= 80.9:
            print("Huruf Mutu : A-")
            print("Sebutan Mutu : Istimewa")
            print("Angka Mutu : 3.7")
            print(30 * "=")
        elif self.nilai >= 72 and self.nilai <= 75.9:
            print("Huruf Mutu : B+")
            print("Sebutan Mutu : Lebih dari Baik")
            print("Angka Mutu : 3.3")
            print(30 * "=")
        elif self.nilai >= 68 and self.nilai <= 71.9:
            print("Huruf Mutu : B")
            print("Sebutan Mutu : Baik")
            print("Angka Mutu : 3")
            print(30 * "=")
        elif self.nilai >= 64 and self.nilai <= 67.9:
            print("Huruf Mutu : B-")
            print("Sebutan Mutu : Cukup Baik")
            print("Angka Mutu : 2.7")
            print(30 * "=")
        elif self.nilai >= 60 and self.nilai <= 63.9:
            print("Huruf Mutu : C+")
            print("Sebutan Mutu : Lebih Dari Cukup")
            print("Angka Mutu : 2.3")
            print(30 * "=")
        elif self.nilai >= 56 and self.nilai <= 59.9:
            print("Huruf Mutu : C")
            print("Sebutan Mutu : Cukup")
            print("Angka Mutu : 2")
            print(30 * "=")
        elif self.nilai >= 41 and self.nilai <= 55.9:
            print("Huruf Mutu : D")
            print("Sebutan Mutu : Kurang")
            print("Angka Mutu : 1")
            print(30 * "=")
        elif self.nilai >= 1 and self.nilai <= 40.9:
            print("Huruf Mutu : E")
            print("Sebutan Mutu : Gagal")
            print("Angka Mutu : 0")
            print(30 * "=")
        else:
            print("Nilai yang dimasukkan tidak valid")

mahasiswa1 = mahasiswa("Ammar", 100)
mahasiswa2 = mahasiswa("Mufid", 80)
mahasiswa3 = mahasiswa("alpha", 60)

mahasiswa1.nilai_akhir()
mahasiswa2.nilai_akhir()
mahasiswa3.nilai_akhir()