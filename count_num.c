/*
 ============================================================================
 Name        : count_num.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long long n;
	int count =0;
	printf("enter an int:");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		++count;
	}
	printf("number of digits:%d",count);

}
