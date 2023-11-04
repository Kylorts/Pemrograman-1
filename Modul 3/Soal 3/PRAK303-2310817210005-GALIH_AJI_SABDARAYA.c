#include <stdio.h>

int main(){
    int A;
    scanf("%d", &A);
    if (A > 0){
        printf("\npositif");
    } else if (A < 0){
        printf("\nnegatif");
    } else if (A == 0){
        printf("\nnol");
    }
    return 0;
}