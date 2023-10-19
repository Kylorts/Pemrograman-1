r =input().split()
pi = float(22/7)
if len(r) == 2:
    r, t = map(float, r)
elif len(r) == 1:
    r = float(r[0])
    t = float(input())
Volume = pi * r * r * t
Luas = 2 * pi * r * (r + t)
Keliling = 2 * pi * r
print(f"\nVolume = {'%.2f'}" %Volume)
print(f"Luas = {'%.2f'}" %Luas)
print(f"Keliling = {'%.2f'}" %Keliling)