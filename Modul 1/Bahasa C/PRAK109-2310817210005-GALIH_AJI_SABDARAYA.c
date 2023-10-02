#include <stdio.h>

int main(){
    int Pasukan_Yu_Zhong = 958730;
    int Jumlah_Pahlawan = 5;
    int Pasukan_Kalah = Pasukan_Yu_Zhong / Jumlah_Pahlawan;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", Pasukan_Yu_Zhong);
    printf("Jumlah pahlawan = %d\n", Jumlah_Pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", Pasukan_Kalah);
    return 0;
}