n = int(input())
if n == 0:
    print("\nNol")
elif n > 0 and n < 10:
    print("\nSatuan")
elif n >= 10 and n < 20:
    print("\nBelasan")
elif n >= 20 and n < 100:
    print("\nPuluhan")
elif n >= 100:
    print("\nAnda Menginput Melebihi Limit Bilangan")