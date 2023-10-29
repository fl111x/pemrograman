/**
 * Program: fungsi_1.c
 * Author: 2350081004/Muhamad Yasir Noval
 * Date: ...............
 * Description: .............
 */

#include <stdio.h>
#include <conio.h>

// KAMUS GLOBAL
// Definisi Prototype
int Diskriminant(int a, int b, int c);

// mengirim nilai diskriminant dari masukan a, b, dan c

int main() {
    // KAMUS lokal pada main driver
    int D;
    int a, b, c;

    // ALGORITMA
    printf("Masukan koefesien a: ");
    scanf("%d", &a);

    printf("Masukan koefesien b: ");
    scanf("%d", &b);

    printf("Masukan koefesien c: ");
    scanf("%d", &c);

    D = Diskriminant(a, b, c);

    printf("Diskriminant = %d", D);

    return 0;
}

// realisasi prototype
int Diskriminant(int a, int b, int c) {
    // KAMUS lokal
    int d;

    // ALGORITMA
    d = ((b * b) - (4 * a * c));
    return (d);
}