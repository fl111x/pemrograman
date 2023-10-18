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
} Point;

// tipe bentukan untuk membuat garis
typedef struct {
    Point p1, p2;
} Garis;

int main() {
    // KAMUS
    Point x1, y1, x2, y2;
    Point x3, y3, x4, y4;
    Garis g1, g2;
    int m1, m2;

    // ALGORITMA
    // gradien pertama
    printf("Gradien Pertama\n");
    printf("Masukan nilai absis pertama: ");
    scanf("%d", &x1.abs);

    printf("Masukan nilai ordinal pertama: ");
    scanf("%d", &y1.ord);

    g1.p1.abs = x1.abs;
    g1.p1.ord = y1.ord;

    printf("masukan nilai absis kedua: ");
    scanf("%d", &x2.abs);

    printf("masukan nilai ordinal kedua: ");
    scanf("%d", &y2.ord);

    g1.p2.abs = x2.abs;
    g1.p2.ord = y2.ord;

    m1 = (g1.p2.abs - g1.p1.abs) / (g1.p2.ord - g1.p1.ord);

    // gradien kedua
    printf("Gradien Kedua\n");
    printf("Masukan nilai absis pertama: ");
    scanf("%d", &x3.abs);

    printf("Masukan nilai ordinal pertama: ");
    scanf("%d", &y3.ord);

    g2.p1.abs = x3.abs;
    g2.p1.ord = y3.ord;

    printf("masukan nilai absis kedua: ");
    scanf("%d", &x4.abs);

    printf("masukan nilai ordinal kedua: ");
    scanf("%d", &y4.ord);

    g2.p2.abs = x4.abs;
    g2.p2.ord = y4.ord;

    m2 = (g2.p2.abs - g2.p1.abs) / (g2.p2.ord - g2.p1.ord);

    if ((m1 * m2) == -1) {
        printf("Garis saling tegak lurus");
    } else {
        printf("Garis tidak saling tegak lurus");
    }

    return 0;
}