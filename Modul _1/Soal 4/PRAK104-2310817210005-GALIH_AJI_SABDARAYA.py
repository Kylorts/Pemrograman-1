HargaSepatuA = 400000
HargaSepatuB = 350000
HargaSepatuADiskon = round(HargaSepatuA - (13/100) * HargaSepatuA)
HargaSepatuBDiskon = round(HargaSepatuB - (21/100) * HargaSepatuB)
print(f"Harga sepatu A adalah {HargaSepatuA}")
print(f"Harga sepatu B adalah {HargaSepatuB}")
print(f"Sepatu A mendapat diskon 13% Sehingga harganya menjadi {HargaSepatuADiskon}")
print(f"Sepatu B mendapat diskon 21% Sehingga harganya menjadi {HargaSepatuBDiskon}")