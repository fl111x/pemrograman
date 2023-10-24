/**
 * Program: jumcacah.c
 * Author: 2350081004/Muhamad Yasir Noval
 * Date: 24 Oktober 2023
 * Description: Membaca sekumpulan nilai integer yang diinputkan melalui
 * keyboard pengguna
 */

#include <stdio.h>
//program jumlah bilangan cacah

int main()
{
    //kamus

    int N,p[50],i,a,hasil,X;

    //algoritma

    up:

    printf("\t=======================================");
    printf("\n\t| PROGRAM PENJUMLAHAN BILANGAN CACAH |\n");
    printf("\t=======================================");
    printf("\nBY : HARFIN A.F - 3411211006\n\n");
    printf("input pencacah : ");scanf("%d",&N);
    printf("\n=======================================\n");

    i = 1;
    hasil = 0;
    // inisialisasi
    do{
        //dilakukan aksi 1x terlebih dahulu
        printf("input data : "); scanf("%d",&p[i]);printf("");
        if (i<N){
            printf("_____________+\n");
        }
        hasil = hasil + p[i];
        i++;
    }while (i<=N);
    printf("\n================================");

    printf("\nBanyak Data Integer\t\t : %d", N);
    printf("\nNilai Penjumlahan\t\t : %d ", hasil);
    printf("\nNilai yang terdapat di dalam Larik : ");
    for (i=1;i<=N;i++){
        printf("%d",p[i]);
        if (i<N)
            printf("	,	");
    }printf("\n================================");
    printf("Masukan Salah satu Input Dibawah !\n1.> Refresh Program \n2.> KELUAR->\n");
    printf("jawaban anda : ");scanf("%d",&X);
    if(X==2){
        return 0;
    }else{
        system ("cls"); printf("\nInput Salah Masukan Lagi \n\n\n");goto up;
    }
}
