/*buatlah program yang menghitung percepatan dari pesawat
dan waktu untuk pesawat mengalami percepatan
disusun oleh benediktus aditya pada tanggal 12 September 2022*/
#include<stdio.h>

int
main(void)
{
    double kecepatan_dalam_km_per_jam, kecepatan_dalam_m_per_detik, jarak, waktu_1, waktu_2, percepatan_m, percepatan_km;

    /*tempat keterangan data kecepatan dalam satuan km/jam*/
    printf("masukkan kecepatan pesawat dalam satuan km/jam = ");
    scanf("%lf", &kecepatan_dalam_km_per_jam); /*tempat memasukkan data kecepatan dalam satuan km/jam*/
    kecepatan_dalam_km_per_jam = (kecepatan_dalam_km_per_jam * 1000) / 3600; /*perhitungan kecepatan dalam km/jam*/
    printf("kecepatan dalam satuan m/s = %.2lf m/s \n", kecepatan_dalam_km_per_jam); /*hasil yang keluar dari perhitungan dan keterangan*/

    /*tempat keterangan data kecepatan dalam satuan m/s*/
    printf("masukkan kecepatan pesawat dalam satuan m/s =  ");
    scanf("%lf", &kecepatan_dalam_m_per_detik); /*tempat memasukkan data kecepatan dalam satuam m/s*/
    printf("jarak dalam meter ="); /*tempat keterangan data jarak*/
    scanf("%lf", &jarak); /*tempat memasukkan data jarak*/

    /*algoritma perhitungan*/
    waktu_1 = (2 * jarak) / kecepatan_dalam_m_per_detik; /*perhitungan waktu dalam detik*/
    printf("waktu yang dibutuhkan pesawat untuk dipercepat hingga lepas landas adalah %.2lf detik \n", waktu_1); /*hasil perhitungan*/
    percepatan_m = kecepatan_dalam_m_per_detik / waktu_1; /*perhitungan percepatan dalam m/s^2*/
    printf("percepatan dari pesawat untuk keluar dari ketapel pesawat adalah %.2lf m/s^2 \n\n", percepatan_m); /*hasil perhitungan*/

    printf("masukkan kecepatan pesawat dalam satuan km/jam = "); /*tempat keterangan data kecepatan dalam satuan km/jam*/
    scanf("%lf", &kecepatan_dalam_km_per_jam); /*tempat memasukkan data*/
    printf("jarak dalam meter = "); /*tempat keterangan jarak dalam meter*/
    scanf("%lf", &jarak); /*tempat memasukkan data*/

    waktu_2 = (2 * jarak) / kecepatan_dalam_km_per_jam; /*perhitungan waktu dalam jam*/
    printf("waktu yang dibutuhkan pesawt untuk dipercepat hingga lepas landas adalah %.2lf jam \n", waktu_2); /*hasil perhitungan*/
    percepatan_km = kecepatan_dalam_km_per_jam / waktu_2; /*perhitungan percepatan dalam km*/
    printf("percepatan dari pesawat untuk keluar dari ketapel pesawat adalah %.2lf km/jam \n", percepatan_km); /*hasil perhitungan*/
    /*catatan*/
    printf("perhitungan yang kedua tidak memperhitungkan perubahan dari satuan diketahui dan yang diminta, perhitungan diatas berdasarkan perhitungannya saja");
    return 0;
}

