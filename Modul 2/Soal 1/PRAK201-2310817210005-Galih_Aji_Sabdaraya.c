#include <stdio.h>

int main(){
    char nama [TMP_MAX], NIM [TMP_MAX], Paralel [TMP_MAX], Lahir [TMP_MAX], Alamat [TMP_MAX], Hobi [TMP_MAX], No_HP [TMP_MAX];

    printf("Nama                      : ");
    fgets(nama,sizeof(nama),stdin);
    printf("NIM                       : ");
    fgets(NIM, sizeof(NIM), stdin);
    printf("Kelas Paralel             : ");
    fgets(Paralel, sizeof(Paralel), stdin);
    printf("Tempat/Tanggal Lahir      : ");
    fgets(Lahir, sizeof(Lahir), stdin);
    printf("Alamat                    : ");
    fgets(Alamat, sizeof(Alamat), stdin);
    printf("Hobby                     : ");
    fgets(Hobi, sizeof(Hobi), stdin);
    printf("No. HP                    : ");
    fgets(No_HP, sizeof(No_HP), stdin);

    puts("\n");
    printf("Nama                      : %s", nama);
    printf("NIM                       : %s", NIM);
    printf("Kelas Paralel             : %s", Paralel);
    printf("Tempat/Tanggal Lahir      : %s", Lahir);
    printf("Alamat                    : %s", Alamat);
    printf("Hobby                     : %s", Hobi);
    printf("No. HP                    : %s", No_HP);

    return 0;
}