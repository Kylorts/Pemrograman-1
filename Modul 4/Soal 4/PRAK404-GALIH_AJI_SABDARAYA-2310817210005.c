#include <stdio.h>

int main(){
    int n;
    double a, b;
    while(1){
        printf("1. penjumlahan");
        printf("\n2. Pengurangan");
        printf("\n3. Perkalian");
        printf("\n4. Pembagian");
        printf("\n5. Exit");
        printf("\nMasukkan Pilihan : ");
        scanf("%d", &n);
        if (n == 1){
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);
            printf("Hasil penjumlahan antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a+b);
        }
        else if (n == 2){
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);
            printf("Hasil pengurangan antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a-b);
        }
        else if (n == 3){
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);
            printf("Hasil perkalian antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a*b);
        }
        else if (n == 4){
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);
            printf("Hasil pembagian antara %.2lf dengan %.2lf adalah %.2lf\n\n", a, b, a/b);
        }
        else if (n < 1 || n > 5){
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
        else if (n == 5){
            printf("Terimakasih, telah menggunakan kalkulator Galih Aji Sabdaraya");
            break;
        }
    }
    return 0;
}