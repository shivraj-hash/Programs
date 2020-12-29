/*
 ============================================================================
 Name        : reverse_num.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,rev=0,rem;
	printf("enter an int:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;

	}
	printf("reverse_num:%d",rev);
		return 0;
}
