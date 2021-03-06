/**
	Perform several operations on a static variable. The
	program also has the option of working with a dynamic
	variable.
	
	@author Pedro Perez
	@version 2.0 13/01/2019
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	long *p;
	long x = 10; //, y = 1000;
	
	/*
	p = (long*) malloc(sizeof(long));
	if (!p) {
		perror(argv[0]);
		exit(0);
	}
	*/
	p = &x;
	printf("value of x = %li\n", x);
	printf("memory address (&x) = %p\n", (&x));
	printf("pointer p = %p\n\n\n", p);
	
	(*p) = 10;
	printf("modifying through p\n");
	printf("value of x = %li\n", x);
	printf("memory address (&x) = %p\n", (&x));
	printf("pointer p = %p\n\n\n", p);
	
	(*p)++;
	printf("modifying through p\n");
	printf("value of x = %li\n", x);
	printf("memory address (&x) = %p\n", (&x));
	printf("pointer p = %p\n\n\n", p);
	
	p++;
	printf("moving pointer p\n");
	printf("pointer p = %p\n", p);
	printf("content (*p) = %li\n\n\n", (*p));
	
	(*p) = 14;
	printf("modifying through p\n");
	printf("pointer p = %p\n", p);
	printf("content (*p) = %li\n\n\n", (*p));
	
	//free(p);
	
	return 0;
}
	
