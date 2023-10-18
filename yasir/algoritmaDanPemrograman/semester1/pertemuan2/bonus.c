/*
    Program: bonus.c
    Author: 2350081004/Muhamad Yasir Noval
    Date: 18 Oktober 2023
    Description: .......
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus
    // staff > 5 dan umurnya >= 50 : Rp.1.000.000
    // staff < 5 dan umurnya bebas : Rp.500.000
    // nonStaff > 5 jika umurnya > 50 : Rp.400.000
    // nonStaff umurnya < 50 : Rp.250.000
    // staff umurnya < 50 : Rp.300.000
    int staff, nonStaff, umurStaff, umurNonStaff;
    int lamaBekerja = 5;

    // Algoritma
    printf("Masukan nilai lama bekerja staff: ");
    scanf("%d", &staff);

    printf("Masukkan nilai lama bekerja nonStaff: ");
    scanf("%d", &nonStaff);

    printf("Masukkan nilai umur staff: ");
    scanf("%d", &umurStaff);

    printf("Masukkan nilai umur nonStaff: ");
    scanf("%d", &umurNonStaff);

    if (staff > lamaBekerja && umurStaff > 50) {
        printf("\n\n(staff) Anda mendapatkan Bonus sebesar Rp.1.000.000\n\n");

    } else if (staff < lamaBekerja) {
        if (umurStaff < 50) {
            printf("\n\n(staff) Anda mendapatkan Bonus sebesar Rp.300.000\n\n");
        } else {
            printf("\n\n(staff) Anda mendapatkan Bonus sebesar Rp.500.000\n\n");
        }
    }

    if (nonStaff > lamaBekerja && umurNonStaff > 50) {
        printf("(nonStaff) And mendapatkan Bonus sebesar Rp.400.000\n\n");
    } else if (nonStaff > lamaBekerja) {
        if (umurNonStaff < 50) {
            printf("(nonStaff) Anda mendapatkan Bonus sebesar Rp.250.000\n\n");
        } else {
            printf("(nonStaff) tidak ada data");
        }
    } else {
        printf("Error\n\n");
    }

    return 0;
}