import math
putaran = 5
jarak_tempuh = 14
keliling_lingkaran = jarak_tempuh / putaran
jari_jari = round(keliling_lingkaran / (2 * math.pi ), 2)
print("Diketahui :")
print(f"Pak Denglek mengelilingi taman = {putaran} Putaran")
print(f"Jarak tempuh Pak Dengklek = {jarak_tempuh} Kilometer\n")
print("Jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari} Kilometer")