/*buat program untuk membantu perencana kota untuk memprediksi
jumlah air yang digunakan dan biaya untuk menggganti toilet berdasarkan
jumlah penduduk
disusun oleh benediktus aditya pada tanggal 10 September 2022*/
#include<stdio.h>


int main(void)
{
    int jumlah_penduduk, jumlah_toilet_yang_digunakan, jumlah_air_yang_dikeluarkan_per_flush_lama, jumlah_air_yang_dikeluarkan_per_flush_baru, jumlah_air_dalam_1_hari_lama, jumlah_air_dalam_1_hari_baru, jumlah_air_yang_dihemat, biaya;

    printf("jumlah penduduk = ");
    scanf("%d", &jumlah_penduduk);
    /*menghitung jumlah toilet yang dipakai*/
    jumlah_toilet_yang_digunakan = jumlah_penduduk / 3;
    printf("jumlah toilet yang digunakan= %d \n", jumlah_toilet_yang_digunakan);

    /*menghitung penggunaan jumlah air di toilet lama*/
    /*menghitung jumlah air yang digunakan*/
    jumlah_air_yang_dikeluarkan_per_flush_lama = jumlah_toilet_yang_digunakan * 15;
    printf("jumlah air yang dikeluarkan oleh toilet lama dalam 1 kali flush = %d L/flush \n", jumlah_air_yang_dikeluarkan_per_flush_lama);
    /*menghitung jumlah air dalam 1 hari*/
    jumlah_air_dalam_1_hari_lama = jumlah_air_yang_dikeluarkan_per_flush_lama * 14;
    printf("jumlah air yang digunakan oleh toilet lama dalam 1 hari = %d L/flush\n", jumlah_air_dalam_1_hari_lama);

    /*menghitung penggunaan jumlah air di toilet baru*/
    /*menghitung jumlah air yang digunakan*/
    jumlah_air_yang_dikeluarkan_per_flush_baru = jumlah_toilet_yang_digunakan * 2;
    printf("jumlah air yang dikeluarkan oleh toilet baru dalam 1 kali flush = %d L/flush \n", jumlah_air_yang_dikeluarkan_per_flush_baru);
    jumlah_air_dalam_1_hari_baru = jumlah_air_yang_dikeluarkan_per_flush_baru * 14;
    printf("jumlah air yang dikeluarkan toilet baru dalam 1 hari = %d L/flush \n", jumlah_air_dalam_1_hari_baru);

    /*menghitung jumlah air yang dihemat*/
    jumlah_air_yang_dihemat = jumlah_air_dalam_1_hari_lama - jumlah_air_dalam_1_hari_baru;
    printf("jumlah air yang dihemat = %dL \n", jumlah_air_yang_dihemat);

    /*menghitung biaya pemasangan toilet baru*/
    biaya = jumlah_toilet_yang_digunakan * 150;
    printf("biaya yang digunakan = %d $ \n", biaya);

    printf("dengan jumlah penduduk %d besar air yang dihemat %d L dengan biaya pemasangan toilet baru %d $", jumlah_penduduk, jumlah_air_yang_dihemat, biaya);
    return 0;


}
