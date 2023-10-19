#include <stdio.h>
#include <math.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    int C = sqrt((B * B) - (A * A));
    int Keliling = A + B + C;
    int Luas = (A * C)/ 2;
    puts("\n");
    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm \n", A);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm^2", Luas);
    
    return 0;
}