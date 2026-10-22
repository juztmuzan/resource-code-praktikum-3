#include <stdio.h>

int main() {
    int pilihan;
    float n1, n2;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih telah menggunakan Kalkulator Muhammad Naufal\n");
            break;
        } else if (pilihan < 1 || pilihan > 5) {
            printf("Input anda salah, silakan coba lagi\n\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &n1);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &n2);

        if (pilihan == 1) {
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1 + n2);
        } else if (pilihan == 2) {
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1 - n2);
        } else if (pilihan == 3) {
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1 * n2);
        } else if (pilihan == 4) {
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, n1 / n2);
        }
    }

    return 0;
}