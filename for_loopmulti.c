/*
 ============================================================================
 Name        : for_loopmulti.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,mul=0;
	printf("enter the number:");
	scanf("%d",&n);

	for (i = 0; i<=10; ++i)
	{
	mul=i*i	;
	printf("\nmul %d \n %d \n%d"n,i,mul);
	}
}
