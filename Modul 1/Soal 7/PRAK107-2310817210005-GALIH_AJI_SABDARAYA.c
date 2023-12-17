#include <stdio.h>

int main(){
    int sisi_a = 4, sisi_b = 5, sisi_c = 7;
    int keliling_tanah = sisi_a + sisi_b + sisi_c;
    int biaya_pagar = 85000;
    int biaya_keluar = keliling_tanah * biaya_pagar;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling_tanah);
    printf("Harga tanah Per Meter adalah %d\n", biaya_pagar);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah Rp : %d", biaya_keluar);
    return 0;
}