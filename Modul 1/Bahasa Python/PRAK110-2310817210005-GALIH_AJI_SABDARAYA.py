import math
Alas = 5
Tinggi = 12
Hipotenusa = round(math.sqrt(Alas ** 2 + Tinggi ** 2))
Keliling_Segitiga = Alas + Tinggi + Hipotenusa
Luas_Segitiga = round(1/2 * Alas * Tinggi)
print("Diketahui :")
print(f"Alas = {Alas} cm")
print(f"Tinggi = {Tinggi} cm\n")
print("Jawab :")
print(f"Sisi A = {Tinggi} cm")
print(f"Sisi B = {Hipotenusa} cm")
print(f"Sisi C = {Alas} cm")
print(f"Keliling = {Keliling_Segitiga} cm")
print(f"Luas = {Luas_Segitiga} cm")