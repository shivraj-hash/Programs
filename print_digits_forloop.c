/*
 ============================================================================
 Name        : print_digits_forloop.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max 100
void printdigit(int n)
{
int arr[max];
int i=0;
int j,r;

while(n!=0)
{
	r=n%10;
	arr[i]=r;
	i++;
	n=n/10;
}
for(j=i-1; j>-1; j--)
{
	printf("\n%d",arr[j]);
}
}

int main()
{
	int n;
	//n=354678;
	scanf("%d",&n);
	printdigit(n);
	//printf("\n%d",n);
}
