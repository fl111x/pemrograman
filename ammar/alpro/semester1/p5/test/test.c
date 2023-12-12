#include <stdio.h>

typedef int array_type[1];

int main () {
	// create and destroy a int[1]
array_type *a = new array_type;
delete [] a;

// create and destroy an int
int *b = new int;
delete b;

// create and destroy an int[1]
int *c = new int[1];
delete[] c;

// create and destroy an int[1][2]
int (*d)[2] = new int[1][2];
delete [] d;
}
