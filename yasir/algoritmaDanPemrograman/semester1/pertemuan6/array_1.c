/**
 * Program: array_1.c
 * Author: 2350081004/Muhamad Yasir Noval
 * Date: ...............
 * Description: .............
 */

#include <conio.h>
#include <stdio.h>
#include <string.h>

// KAMUS global
typedef struct {
    char IsiTabel[10];
} TabString;

int main() {
    // KAMUS lokal di main driver
    TabString MyTabel[10];
    char Hari[10];
    int i;

    // ALGORITMA
    for (i = 1; i <= 7; i++) {
        printf("Masukan Nama Hari ke %d : ", i);
        scanf("%s", &Hari);
        strcpy(MyTabel[i].IsiTabel, Hari);
    }

    for (i = 1; i <= 7; i++) {
        printf("Hari ke %d = %s\n", i, MyTabel[i].IsiTabel);
    }

    return 0;
}