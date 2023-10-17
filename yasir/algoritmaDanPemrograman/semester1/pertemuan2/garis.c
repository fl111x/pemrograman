/*
    Program: garis.c
    Author: 2350081004/Muhamad Yasir Noval
    Date: 18 Oktober 2023
    Description: .......
*/

#include <stdio.h>
#include <stdlib.h>

// tipe bentukan untuk membuat point
typedef struct {
    int abs, ord;
}Point;

// tipe bentukan untuk membuat garis
typedef struct {
    Point p1, p2;
}Garis;

int main() {
    // KAMUS
    Point x1, y1, x2, y2;
    Garis g1, g2;
    
    // ALGORITMA
    printf("Masukan nilai absis pertama: ");
    scanf("%d", &x1.abs);

    printf("Masukan nilai ordinal pertama: ");
    scanf("%d", &y1.ord);

    g1.p1.abs = x1.abs;
    g1.p1.ord = y1.ord;

    printf("masukan nilai absis kedua: ");
    scanf("%d", &x2.abs);

    printf("masukan nilai absis kedua: ");
    scanf("%d", &y2.ord);

    g2.p1.abs = x2.abs;
    g2.p1.ord = y2.ord;
}