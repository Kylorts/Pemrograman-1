#include <stdio.h>

int main(){
    int nilai;
    scanf("%d", &nilai);
    if (nilai >= 80 && nilai<=100){
        printf("\nA");
    } else if (nilai >= 70 && nilai < 80){
        printf("\nB");
    } else if (nilai >= 60 && nilai < 70){
        printf("\nC");
    } else if (nilai >= 50 && nilai < 60){
        printf("\nD");
    } else if(nilai >= 0 && nilai < 50){
        printf("\nE");
    }
    return 0;
}