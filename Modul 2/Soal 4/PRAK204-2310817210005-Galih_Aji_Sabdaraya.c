#include <stdio.h>

int main(){
    double r, t;
    scanf("%lf %lf", &r, &t);
    double pi = (double) 22/7;
    double Volume = pi * r * r * t;
    double Luas = 2 * pi * r * (r + t);
    double Keliling = 2 * pi * r;
    printf("\nVolume = %.2lf\n", Volume);
    printf("Luas = %.2lf\n", Luas);
    printf("Keliling = %.2lf", Keliling);
    
    return 0;
}