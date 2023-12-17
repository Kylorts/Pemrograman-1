#include <stdio.h>

int main(){
    int Harga_Sepatu_A = 400000, Harga_Sepatu_B = 350000;
    int Diskon_A = 13, Diskon_B = 21;
    int Hasil_A = Harga_Sepatu_A * Diskon_A / 100;
    int Hasil_B = Harga_Sepatu_B * Diskon_B / 100;
    int Harga_Akhir_A = Harga_Sepatu_A - Hasil_A;
    int Harga_Akhir_B = Harga_Sepatu_B - Hasil_B;
    printf("Harga sepatu A adalah %d\n", Harga_Sepatu_A);
    printf("Harga sepatu B adalah %d\n", Harga_Sepatu_B);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %d\n", Harga_Akhir_A);
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %d", Harga_Akhir_B);
    return 0;
}