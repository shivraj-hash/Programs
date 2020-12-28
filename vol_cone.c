/*
 ============================================================================
 Name        : cone.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.141

int main(void) {
	int r,h;
	float V;

    printf("enter radius :");
    printf("enter height :");
    scanf("%d \n %d", &r,&h);
    V =  PI* r * r * h  /  3;
	printf("volume of cone is %f",V);
	return (0);
}
