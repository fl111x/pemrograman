//
// Created by myasi on 10/15/2023.
//

/*
 * PROGRAM: segitiga.c
 * Author: Muhamad Yasir Noval
 * NIM: 2350081004
 * Class: A
 * Description: menetukan sebuah bentuk segitiga dari tiga buah masukan bilangan bulat,
 * dengan bilangan bulat tidak negatif
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    // KAMUS
    int a, b, c;

    // ALGORITMA
    printf("Masukan nilai A: ");
    scanf("%d", &a);

    printf("Masukan nilai B: ");
    scanf("%d", &b);

    printf("Masukan nilai C: ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0) {
        printf("Sebuah segitiga");
    } else {
        printf("Bukan segitiga");
    }

    return 0;
}