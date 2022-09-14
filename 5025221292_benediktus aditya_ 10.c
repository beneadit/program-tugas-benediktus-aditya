/*buatlah output persaman dari grafik diantara 2 titik
dibuat oleh benediktus aditya kusuma wardana 5025221292 pada tanggal 11 September 2022*/

#include<stdio.h>


int
main(void)
{
    float x1, y1, x2, y2, gradien, titik_tengah_sumbu_x, titik_tengah_sumbu_y, gradien_tegak_lurus, konstanta_persamaan;



    printf(" masukkan titik pertama yang anda inginkan \n"); /*keterangan untuk memasukkan titik*/
    scanf("%f%f", &x1, &y1); /*tempat memasukkan data*/

    printf("masukkan titik kedua yang anda inginkan \n"); /*keterangan untuk memasukkan titik*/
    scanf("%f%f", &x2, &y2); /*tempat memasukkan data*/

    gradien = (y2 - y1) / (x2 - x1); /*perhitungan gradien*/
    printf("gradien yang dihasilkan adalah %.2f \n", gradien); /*hasil perhitungan yang dikeluarkan dari hasil gradien*/

    gradien_tegak_lurus = gradien * -1; /*perhitungan gradien tegak lurus*/
    printf("gradien tegak lurus yang dihasilkan adalah %.2f \n", gradien_tegak_lurus); /*hasil perhitungan yang dikeluarkan dari hasil gradien tegak lurus*/

    titik_tengah_sumbu_x = (x2 + x1) / 2; /*perhitungan titik tengah sumbu x*/
    printf("titik tengah sumbu x adalah %.2f \n", titik_tengah_sumbu_x); /*hasil perhitungan yang dikeluarkan dari hasil titik tengah sumbu x*/

    titik_tengah_sumbu_y = (y2 + y1) / 2; /*perhitungan titik tengah sumbu y*/
    printf("titik tengah sumbu y adalah %.2f \n", titik_tengah_sumbu_y); /*hasil perhitungan yang dikeluarkan dari hasil titik tengah sumbu y*/

    konstanta_persamaan = titik_tengah_sumbu_y - (gradien_tegak_lurus * titik_tengah_sumbu_x); /*perhitungan konstanta persamaan*/
    printf("konstantan persamaan sama dengan %.2f \n", konstanta_persamaan); /*hasil perhitungan yang dikeluarkan dari hasil konstanta persamaan*/

    /*hasil yang dikeluarkan dari perhitungan dan data yang ada*/
    printf("dari titik %.f,%.f dan titik %.f,%.f dihasilkan persamaan garis y=%.2fx %.2f", x1, y1, x2, y2, gradien_tegak_lurus, konstanta_persamaan);
    return 0;







}
