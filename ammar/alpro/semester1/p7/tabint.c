/*	program	:  array_1.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:10/12/2023
	desc 	: memasukan hari ke tabel 
*/


#include <stdio.h>
#include <math.h>
int isprima (int n);

int main(){
	int li;
	
	printf("bilangan prima dari 1 sampe dengan 100 : \n");
	
	for (li = 1; li <= 100; li++){
		if(isprima(li)){
			printf("<%d>", li);
		}
	}
	
	return 0;
}

int isprima (int n){
	int li;
	
	if (n == 2){
		return 1; //true
		
	}else if (n % 2 == 0 || n == 1){
		return 0; //false
	}
	
}
