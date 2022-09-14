/* buatlah program untuk memprediksi
score yang dibutuhkan dalam ujian akhir untuk
mencapai grade yang diinginkan di mata kuliah tersebut
disusun oleh benediktus aditya pada tanggal 11 September 2022*/
#include <stdio.h>


int
main (void)
{
    char grade_yang_diinginkan;
    float nilai_rata_rata_minimum_untuk_mendapatkan_grade_itu, nilai_rata_rata_anda, persentase_yang_diambil, nilai_yang_dibutuhkan;
    printf("grade yang diinginkan = \n"); /*keterangan yang akan ditampilkan untuk data grade*/
    scanf("%c", &grade_yang_diinginkan); /* tempat memasukkan data yang diinginkan*/
    printf("nilai rata rata minimum untuk mendapatkan grade itu = \n"); /*keterangan yang akan ditampilkan untuk nilai rata-rata minimum*/
    scanf("%f", &nilai_rata_rata_minimum_untuk_mendapatkan_grade_itu); /*tempat memasukkan data*/
    printf("nilai rata-rata anda= \n"); /*keterangan yang akan ditampilkan untuk nilai rata-rata anda*/
    scanf("%f", &nilai_rata_rata_anda); /*tempat memasukkan data yang diinginkan*/
    printf("persentase yang diambil= \n"); /*keterangan yang akan ditampilkan untuk persentase nilai yang diambil*/
    scanf("%f", &persentase_yang_diambil); /*tempat memasukkan data yang diinginkan*/
    /*perhitungan untuk mencaro nilai yang dibutuhkan*/
    nilai_yang_dibutuhkan = ((nilai_rata_rata_minimum_untuk_mendapatkan_grade_itu)/(persentase_yang_diambil/100)-(nilai_rata_rata_anda)/(persentase_yang_diambil/100)+nilai_rata_rata_anda);
    printf("nilai yang harus anda butuhkan %f untuk mendapatkan grade %c\n", nilai_yang_dibutuhkan, grade_yang_diinginkan); /*hasil dari perhitungan akan keluar beserta keterangan data*/
    return 0;
}
