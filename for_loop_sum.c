/*
 ============================================================================
 Name        : for_loop_sum.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,sum=0,n;
	printf("enter the no:");
	scanf("%d",&n);

	for (i = 0; i <= 10; i++)
	{
		sum=sum+i; //sum+=i;
	printf("\nsum= %d",sum);
	}
}
