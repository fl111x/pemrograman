#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char i, j;
	i = 3;
	j = 4;
	
	if (i&&j);
	if (i&j);
	//false = 00000000;
	if (i||j);
	if (i|j);
	//true = 00000111
	if (i^j);
	if (~i);
	//true = 11111000
}

