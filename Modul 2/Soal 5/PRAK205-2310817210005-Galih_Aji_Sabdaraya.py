import math
A = input().split()
if len (A) == 2:
    A, B = map(int, A)
elif len (A) == 1:
    A = int(A[0])
    B = int(input())
C = int(math.sqrt(B ** 2 - A ** 2))
Keliling = int(A + B + C)
Luas = int(A * C / 2)
print(f"\nAlas = {C} cm")
print(f"Tinggi = {A} cm")
print(f"Keliling = {Keliling} cm")
print(f"Luas = {Luas} cm^2")