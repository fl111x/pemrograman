/**
 * Program: fungsi1.c
 * Author: 2350081004/Muhamad Yasir Noval
 * Date: ...............
 * Description: .............
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

// KAMUS global
typedef struct {
    char IsiTabel[10];
} TabString;

void CatatHari(TabString Hari[7], char NamaHari[10], int ke);

int main() {
    // KAMUS lokal di main driver
    TabString MyTabel[7];
    char Hari[10];
    int i;

    // ALGORITMA
    for (i = 1; i <= 7; i++) {
        printf("Masukan Nama Hari ke %d : ", i);
        scanf("%s", &Hari);

        CatatHari(MyTabel, Hari, i);
    }

    for (i = 1; i <= 7; i++) {
        printf("Hari ke %d = %s\n", i, MyTabel[i].IsiTabel);
    }

    return 0;
}

void CatatHari(TabString Hari[7], char NamaHari[10], int ke) {
    strcpy(Hari[ke].IsiTabel, NamaHari);
}