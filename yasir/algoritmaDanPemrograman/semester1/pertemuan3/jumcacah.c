/**
 * Program: jumcacah.c
 * Author: 2350081004/Muhamad Yasir Noval
 * Date: 24 Oktober 2023
 * Description: Membaca sekumpulan nilai integer yang diinputkan melalui
 * keyboard pengguna
 */

#include <stdio.h>

int main() {
    // KAMUS
    int N, data,i,a,hasil,X;

    // ALGORITMA
    printf("input pencacah : ");
    scanf("%d",&N);

    i = 1;
    hasil = 0;
    // inisialisasi
    do{
        //dilakukan aksi 1x terlebih dahulu
        printf("input data : ");
        scanf("%d",&data);printf("");
        if (i<N){
            printf("_____________+\n");
        }
        hasil = hasil + data;
        i++;
    }while (i<=N);
    printf("\n\n================================");

    printf("\nBanyak Data Integer\t\t : %d", N);
    printf("\nNilai Penjumlahan\t\t : %d ", hasil);
}
