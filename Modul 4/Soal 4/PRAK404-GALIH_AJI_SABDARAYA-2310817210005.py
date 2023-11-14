while True:
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    n = int(input("Masukkan Pilihan : "))
    if n == 1:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))
        operation = a + b
        print(f"Hasil Penjumlahan antara {a:.2f} dengan {b:.2f} adalah {operation:.2f}\n")
    elif n == 2:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))
        operation = a - b
        print(f"Hasil Pengurangan antara {a:.2f} dengan {b:.2f} adalah {operation:.2f}\n")
    elif n == 3:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))
        operation = a * b
        print(f"Hasil Perkalian antara {a:.2f} dengan {b:.2f} adalah {operation:.2f}\n")
    elif n == 4:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))
        operation = a / b
        print(f"Hasil Pembagian antara {a:.2f} dengan {b:.2f} adalah {operation:.2f}\n")
    elif n < 1 or n > 5:
        print("Input anda salah, silahkan coba lagi\n")
    elif n == 5:
        print("Terimakasih, telah menggunakan kalkulator Galih Aji Sabdaraya")
        break