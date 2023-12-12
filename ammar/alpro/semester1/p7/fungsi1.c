/*	program	:  fungsi1.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 2350081008
	date	:10/12//2023
	desc 	: memasukan hari ke tabel menggunakan proccedure
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct {
	char IsiTabel[10];
}TabString;

void catathari(TabString Hari[7], char NamaHari[10], int ke);

int main(){
	//kamus
	TabString Mytabel[10];
	char Hari[10];
	int i;
	
	//algoritma
	for (i = 1; i <= 7; i++){
		printf("masukan Nama Hari Ke %d :", i); scanf("%s", &Hari);
		catathari(Mytabel, Hari, i);
	}
	for (i = 1; i <= 7; i++){
		printf("Hari ke %d = %s\n", i, Mytabel[i].IsiTabel);
	}
	return 0;
}

void catathari(TabString Hari[7], char NamaHari[10], int ke){
	strcpy(Hari[ke].IsiTabel, NamaHari);
}
