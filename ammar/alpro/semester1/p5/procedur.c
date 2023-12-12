/*	program	:  procedur.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:7/11//2023
	desc 	: cetak tabel menggunakan procedure (Cetak tabel genap), (Cetak Invers), (InsertFirst), (Dellast)
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
//prototype membvuat tabel
void CreateTab(TabInt *T);

//prototype memasukan elemen
void AddElm(TabInt *T, int x);

//prototype mencetak tabel
void CetakTabel(TabInt T);

//prototype mencetak tabel genap
void CetakGenap(TabInt T);

//prototype cetak tabel invers
void CetakInvers(TabInt T);

//protoype menyisipkan variabel ke paling depan array
void InsertFirst(TabInt *T, int x);

//menghapus variabel di dalam array yang paling belakang
void DelLast(TabInt *T, int *y);

//main driver
int main () {
	//kamus
	TabInt Mytab;
	int N, z, o;
	
	//algoritma
	CreateTab(&Mytab);
	printf ("masukan bilangan :"); scanf("%d", &N);
	while (N != 999){
		AddElm (&Mytab, N);
		printf ("masukan bilangan :"); scanf("%d", &N);
	}
	
	printf("cetak tabel :\n");
	CetakTabel(Mytab);
	
	printf("\n");
	
	//cetak tabel genap
	printf("\nmencetak tabel genap :\n");
	CetakGenap(Mytab);
	
	printf("\n");
	
	//mencetak tabel invers
	printf("\nmencetak tabel invers :\n");
	CetakInvers(Mytab);
	
	printf("\n");
	
	//insert first
	printf("\nmasukan nilai z :"); scanf("%d", &z);
	InsertFirst (&Mytab, z);
	printf("mencetak tabel yang di sisipkan z di depan :\n");
	CetakTabel(Mytab);
	
	printf("\n");
	//menghapus nilai akhir dan dimasukan ke dalam variabek o
	o = 0;
	DelLast(&Mytab, &o);
	
	printf ("\nnilai o : %d\n", o);
	printf("mencetak tabel DelLast :\n");
	CetakTabel(Mytab);
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

void CetakInvers (TabInt T){
	//kamus lokal
	int i;
	
	//algoritma
	for (i = T.neff; i >= 1; i--){
		
		printf ("<%d>", T.Tb[i]);
		
	}
}

void InsertFirst (TabInt *T, int x){
	//kamus lokal
	int i, j, last;
	
	last = (*T).neff;
	//algoritma
	if ((*T).neff < nMax){
		for (j = last ; last >= 1; j--){
			(*T).Tb[j + 1] = (*T).Tb[j];
			last--;
		}
		
		(*T).Tb[last + 1] = x;
		(*T).neff++;
	}
	
			
}

void DelLast (TabInt *T, int *y){
	
	
	
	//algoritma
	*y = (*T).Tb[(*T).neff];
	
	(*T).neff--;
	
}
