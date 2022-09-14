/* konversikan mata uang dari dollar amerika ke pounds inggris
dibuat oleh benediktus aditya pada tanggal 9 September 2022*/
#include <stdio.h>


int main(void)
{


    float dollars, pounds; /*mata uang dollars dan pounds*/
    printf("masukkan nominal dollar yang ingin dikonversi= $"); /*keterangan yang akan keluar*/
    scanf("%f", &dollars); /*memasukkan input data yang diinginkan*/
    pounds= dollars*0.65; /*perhitungan konversi dari dollar ke pounds*/
    printf("sama dengan %f pounds. \n", pounds); /*hasil hitungan beserta data yang akan keluar*/
    return 0;
}
