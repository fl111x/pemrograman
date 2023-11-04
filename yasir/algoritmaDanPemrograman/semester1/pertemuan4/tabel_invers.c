/**
 * Program: tabel_invers.c
 * Author: 2350081004/Muhamad Yasir Noval
 * Date: ...............
 * Description: .............
 */

#include <stdio.h>
#include <conio.h>
#include "boolean.h"

#define nMax 10

typedef struct {
    int T[nMax + 1];
    int neff;
}TabInt;

int main() {
    // KAMUS
    TabInt MyTab;
    int N;
    int i;

    // ALGORITMA
    MyTab.neff = 0;
    printf("Masukan bilangan: ");
    scanf("%d", &N);

    while (N != 999) {
        if (MyTab.neff < nMax) {
            MyTab.neff++;
            MyTab.T[MyTab.neff] = N;
        }

        printf("Masukan bilangan: ");
        scanf("%d", &N);
    }

    // cetak tabel
    for (i = MyTab.neff; i >= 1; i--) {
        printf("<%d>", MyTab.T[i]);
    }
}