/*
 ============================================================================
 Name        : leap_withfunction.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 ============================================================================
 */
#include<stdio.h>

int main()
{

 int year;
 printf("Enter any year : ");
 scanf("%d", &year);

 if(leap(year))
 {
   printf("\n%d is leap year",year);
 }
 else
 {
   printf("\n%d is not leap year",year);
 }
 return (leap(year));
}

int leap(int y)


{
	if((y%400==0 && y%100==0)||(y%4==0)){
 }


	return((y%400==0 && y%100==0)||(y%4==0));

}

