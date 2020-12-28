/*
 ============================================================================
 Name        : sum_while.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

int main()
{
  int Num, i = 1, Sum = 0,mul=0;
    printf("\nEnter any Integer Value\n");
  scanf("%d", &Num);

  while((i<= Num))
  {
     Sum = Sum + i;
     i++;
  }

  printf("Sum of N Numbers = %d", Sum);

  while((i<= Num))
   {

     mul = mul*i;
      ++i;
   }
printf("\n mul of N Numbers = %d", mul);

   return 0;
}

