#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    if (A > B){
        printf("\n%d %d", B, A);
    } else {
        printf("\n%d %d", A, B);
    }
    return 0;
}