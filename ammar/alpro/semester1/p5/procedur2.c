/*	program	:  procedur2.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:7/11//2023
	desc 	: cetak tabel genap menggunakan procedure
*/

#include <conio.h>
#include <stdio.h>
#include "boolean.h"

#define nMax 10

typedef struct {
	int Tb[nMax + 1];
	int neff;
}TabInt;

//prototype
void CreateTab(TabInt *T);

void AddElm(TabInt *T, int x);

void CetakTabel(TabInt T);

void CetakGenap(TabInt T);

//main driver
int main () {
	//kamus
	TabInt Mytab;
	int N;
	
	//algoritma
	CreateTab(&Mytab);
	printf ("masukan bilangan :"); scanf("%d", &N);
	while (N != 999){
		AddElm (&Mytab, N);
		printf ("masukan bilangan :"); scanf("%d", &N);
	}
	
	CetakTabel(Mytab);
	
	printf ("\nCetak tabel genap\n");
	CetakGenap(Mytab);
	return 0;
}

//body of prototype
void CreateTab (TabInt *T){
	(*T).neff = 0;
}

void AddElm (TabInt *T, int x){
	if ((*T).neff < nMax){
		(*T).neff++;
		(*T).Tb[(*T).neff] = x;
	}
}

void CetakTabel (TabInt T){
	//kamus lokal
	int i;
	
	for (i = 1; i <= T.neff; i++){
		printf ("<%d>", T.Tb[i]);
	}
}

void CetakGenap (TabInt T){
	//kamus lokal
	int i;
	
	//algoritma
	for (i = 1; i <= T.neff; i++){
		if (T.Tb[i] %2 == 0){
			printf ("<%d>", T.Tb[i]);
		}
	}
}
