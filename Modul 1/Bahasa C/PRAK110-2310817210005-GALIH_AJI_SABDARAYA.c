#include <stdio.h>
#include <math.h>

int main(){
    int Alas = 5, Tinggi = 12;
    int Hipotenusa = sqrt(Alas * Alas + Tinggi * Tinggi);
    int Keliling_Segitiga = Alas + Tinggi + Hipotenusa;
    int Luas_Segitiga = Alas * Tinggi / 2;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", Alas);
    printf("Tinggi = %d cm\n\n", Tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", Tinggi);
    printf("Sisi B = %d cm\n", Hipotenusa);
    printf("Sisi C = %d cm\n", Alas);
    printf("Keliling = %d cm\n", Keliling_Segitiga);
    printf("Luas = %d cm", Luas_Segitiga);
    return 0;
}