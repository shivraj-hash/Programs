/*
 ============================================================================
 Name        : switch.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char ch;
	int a,b;
	printf("enter the operation to be performed:(+,-,/,*)");
	scanf("%c",&ch);
	printf("\n enter the operator:");
	scanf("%d %d",&a,&b);

	switch (ch) {
		case'+':
		{
			int add=a+b;
			printf("\n addition:");
			printf("%d",add);
			break;

	}

								case '-':
									{
										int sub=a-b;
									printf("\n sub:");
									printf("%d",sub);
									break;

									}
											case '*':
											{
												int mul=a*b;
												printf("\n mul:");
												printf("%d",mul);
												break;

											}
														case '/':
														{
															int div=a/b;
															printf("\n div :");
															printf("%d",div);
															break;
														}

		default:
			printf("invalid choice");


															}





return 0;

	}



