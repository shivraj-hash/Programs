/*
 ============================================================================
 Name        : while_loop.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=1;
	unsigned short int n;
	printf("enter a no");
	scanf("%u",&n);
	while(i<n)
	{
		printf("\n %d",i);
		++i;
	}
	return 0;
}
