/*
 ============================================================================
 Name        : sphere.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//A=4πr2
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int radius;
	float area;

	scanf("%d",&radius);
	area = 4 * 3.14 * radius*radius;
	printf("area is %f", area);
	return(0);
}
