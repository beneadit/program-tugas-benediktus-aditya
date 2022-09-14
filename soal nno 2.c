/*prediksikan berapa besar MW dari energi yang akan dihasilkan
jika 90% dari pekerjaan selesai di air oleh gravitasi yang dikonversi
ke energi listrik*/
#include<stdio.h>
#define GRAVITAS 9.80
#define MASSA_AIR 1000

int
main(void)
{
    float W, tinggi, MW; /*memasukkan variabel*/
    printf("masukkan tinggi dalam satuan meter = "); /*mengeluarkan tulisan "masukkan tinggi dalam satuan meter" */
    scanf("%f", &tinggi ); /*memasukkan angka yang diinginkan*/

    W = MASSA_AIR * GRAVITAS * tinggi; /*perhitungan W*/
    printf("W = %.2f \n", W); /*pengeluaran hasil perhitungan W*/

    MW = W / 1000000; /*perhitungan MW*/
    printf("MW = %.2f", MW); /*pengeluaran hasil perhitungan MW*/
    return 0;
}
