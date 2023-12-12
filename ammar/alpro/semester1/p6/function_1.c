/*	program	:  function_1.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:28/11//2023
	desc 	: membuat dan mencetak tabel menggunakan prosedur dengan tambahan fitur function
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

//prototype  banyak elemen
int getJumElm(TabInt T);

//prototype jumlah elemen
int SumElm(TabInt T);

//prototype mencari elemen
boolean CariElm(TabInt T, int x);


//main driver
int main () {
	//kamus
	TabInt Mytab;
	TabInt Mytab1;
	int N, z, o, k;
	
	//algoritma
	CreateTab(&Mytab);
	printf ("masukan bilangan :"); scanf("%d", &N);
	while (N != 999){
		AddElm (&Mytab, N);
		printf ("masukan bilangan :"); scanf("%d", &N);
	}
	
	printf("cetak tabel :\n");
	CetakTabel(Mytab);
	
	printf("\n\n");
	
	printf("banyak elemen : %d\n", getJumElm(Mytab));
	printf("jumlah elemen : %d\n", SumElm(Mytab));
	
	printf("\nmasukan elemen yang mau dicari :"); scanf("%d", &k);
	
	if (CariElm(Mytab, k)){
		printf("elemen ada\n");
	}else{
		printf("elemen tidak ada\n");
	}
	


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

int getJumElm(TabInt T){
	//kamus
	int jum;
	
	//algoritma
	jum = T.neff;
	
	return jum;
}

int SumElm(TabInt T){
	//kamus
	int sum;
	int i;
	
	//algoritma
	sum = 0;
	for (i = 1; i <= T.neff; i++){
		sum = sum + T.Tb[i];
	}
	
	return sum;
}

boolean CariElm(TabInt T, int x){
	//kamus
	boolean ketemu;
	int i;
	
	//algoritma
	ketemu = false;
	i = 1;
	
	while(i <= T.neff && !ketemu){
		if(T.Tb[i] == x){
			ketemu = true;
		}else{
			i++;
		}
	}
	
	return ketemu;
}

int JumElmGanjil(TabInt T){
	//kamus 
	int i;
	int ganjil;
	//algoritma
	ganjil = 0;
	for(i = 1; i <= T.neff; i++){
		if(T.Tb[i] %2 != 0){
			ganjil = ganjil + 1;
		}
	}
	
	return ganjil;
}

int SumElmGenap(TabInt T){
	//kamus
	int i;
	int jum;
	
	//algoritma
	jum = 0;
	for(i = 1; i <= T.neff; i++){
		if(T.Tb[i] %2 == 0){
			jum = jum + T.Tb[i];
		}
	}
	
	return jum;
}

TabInt CopyMytab(TabInt T){
	//kamus
	TabInt Copy;
	
	int i;
	//algoritma
	Copy.neff = 0;
	
	for(i = 1; i <= T.neff; i++){
		Copy.neff++;
		Copy.Tb[i] = T.Tb[i] * -1 ;
		
	}
	
	return Copy;
}

