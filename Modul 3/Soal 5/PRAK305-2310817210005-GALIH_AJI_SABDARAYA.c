#include <stdio.h>

int main(){
    int hari, jam, menit, detik;
    scanf("%d", &detik);
    hari = detik / 86400;
    detik %= 86400;
    jam = detik/3600;
    detik %= 3600;
    menit = detik / 60;
    detik %= 60;

    if (hari > 0){
        printf("\n%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    } else {
        printf("\n%02d:%02d:%02d", jam, menit, detik);
    }
    return 0;
}