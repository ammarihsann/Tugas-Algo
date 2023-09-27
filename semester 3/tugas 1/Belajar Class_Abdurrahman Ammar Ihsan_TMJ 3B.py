class KTP:
    def __init__(self, nama, ttl, gender, alamat):
        self.nama = nama
        self.ttl = ttl
        self.gender = gender
        self.alamat = alamat

    def kartu(self):
        print(f"Nama                 : {self.nama}")
        print(f"Tempat/Tanggal Lahir : {self.ttl}")
        print(f"Gender               : {self.gender}")
        print(f"Alamat               : {self.alamat}")
        print(50 * "=")


ktp1 = KTP("Satria Baja Hitam",
           "GEREM, 03-10-1993",
           "LAKI-LAKI",
           "GEREM DUSUN KALIMATI")

ktp2 = KTP("AZAN MAGRIB",
           "NTB, 08-09-1977",
           "LAKI-LAKI",
           "RINGKIT")

ktp3 = KTP("Abdurrahman Ammar Ihsan",
           "JKT, 27-06-2004",
           "LAKI-LAKI",
           "Depok")

print(50 * "=")
ktp1.kartu()
ktp2.kartu()
ktp3.kartu()
