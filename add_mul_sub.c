/*
 ============================================================================
 Name        : add_mul_sub.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;


    printf("input any two numbers separated by comma : ");
    scanf("%d,%d", &num1, &num2);


    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    printf("the sum of the given numbers : %d\n", sum);
    printf("the difference of the given numbers : %d\n", sub);
    printf("the product of the given numbers : %d\n", mult);
    printf("the quotient of the given numbers : %f\n", div);
    printf("MOD = %d\n", mod);

    return 0;
}
