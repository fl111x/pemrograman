/*	program	:  array_1.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:28/11//2023
	desc 	: memasukan hari ke tabel 
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct {
	char IsiTabel[10];
}TabString;

int main(){
	//kamus
	TabString Mytabel[10];
	char Hari[10];
	int i;
	
	//algoritma
	for (i = 1; i <= 7; i++){
		printf("masukan Nama Hari Ke %d :", i); scanf("%s", &Hari);
		strcpy(Mytabel[i].IsiTabel, Hari);
	}
	for (i = 1; i <= 7; i++){
		printf("Hari ke %d = %s\n", i, Mytabel[i].IsiTabel);
	}
	return 0;
}
