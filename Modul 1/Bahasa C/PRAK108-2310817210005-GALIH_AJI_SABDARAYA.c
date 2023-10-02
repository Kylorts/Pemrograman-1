#include <stdio.h>

int main(){
    int putaran = 5, jarak_tempuh = 14;
    float pi = 3.14;
    float keliling_lingkaran = (float)jarak_tempuh / putaran;
    float jari_jari = (float)keliling_lingkaran / (2 * pi);
    printf("Diketahui :\n");
    printf("Pak Denglek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jarak_tempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);
    return 0;
}