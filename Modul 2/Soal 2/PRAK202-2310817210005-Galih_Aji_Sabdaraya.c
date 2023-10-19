#include <stdio.h>

int main(){
    double number1, number2;
    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &number1);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%lf", &number2);
    double result = number1 + number2;
    printf("\nHasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%.1lf\" adalah \"%.2lf\"", number1, number2, result);
    return 0;
}