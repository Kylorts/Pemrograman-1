#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a == 0){
        printf("\nNol");
    } else if (a > 0 && a < 10){
        printf("\nSatuan");
    } else if (a >= 10 && a < 20){
        printf("\nBelasan");
    } else if (a >= 20 && a < 100){
        printf("\nPuluhan");
    } else if (a >= 100){
        printf("\nAnda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}