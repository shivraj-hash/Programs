/*
 ============================================================================
 Name        : c.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include<math.h>
//#define  PI 3.141 ;

int main(void) {
	float area,PI=3.141;
	int radius;
    printf("enter radius circle\n");
    scanf("%d",&radius);
    area = PI * radius * radius;
    printf("area of circle %f",area);

    return (0);


}
