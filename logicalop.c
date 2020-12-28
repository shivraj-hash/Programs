/*
 ============================================================================
 Name        : logicalop.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=5,b=5,c=10;

	if ((a==b)&&(c>b)) {
		printf("result1 condition is true\n:");
} else {
    printf("result1 - Condition is not true\n" );
 }
	if ((a==b)&&(c<b)) {
		printf("result2 condition is true\n");
        }
	 else {
	      printf("result2 - Condition is not true\n" );
	   }
	if ((a!=b)||(c<b)) {
		printf("result3 condition is true\n");

	}
	 else {
	      printf("result3 - Condition is not true\n" );
	   }

	if (!(a!=b)) {
		printf("result4 condition is true\n");

	}
	 else {
	      printf("result4 - Condition is not true\n" );
	   }
	if (!(a==b)) {
		printf("result5 condition is true\n");

	}
	 else {
	      printf("result5- Condition is not true\n" );
	   }








	}

