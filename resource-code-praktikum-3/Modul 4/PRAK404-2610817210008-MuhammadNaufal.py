while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    pilihan = int(input("Masukkan Pilihan : "))
    
    if pilihan == 5:
        print("Terimakasih telah menggunakan Kalkulator Muhammad Naufal")
        break
    elif pilihan < 1 or pilihan > 5:
        print("Input anda salah, silakan coba lagi\n")
        continue
        
    n1 = float(input("Masukkan nilai pertama : "))
    n2 = float(input("Masukkan nilai kedua : "))
    
    if pilihan == 1:
        print(f"Hasil Penjumlahan antara {n1:.2f} dengan {n2:.2f} adalah {n1 + n2:.2f}\n")
    elif pilihan == 2:
        print(f"Hasil pengurangan antara {n1:.2f} dengan {n2:.2f} adalah {n1 - n2:.2f}\n")
    elif pilihan == 3:
        print(f"Hasil perkalian antara {n1:.2f} dengan {n2:.2f} adalah {n1 * n2:.2f}\n")
    elif pilihan == 4:
        print(f"Hasil pembagian antara {n1:.2f} dengan {n2:.2f} adalah {n1 / n2:.2f}\n")