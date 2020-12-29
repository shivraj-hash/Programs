/*
 ============================================================================
 Name        : krishnamurthi_num.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,temp,sum,currentnum,fact;
	printf("enter a num:");
	scanf("%d",&num);
	temp=num;
    sum=0;

while(temp!=0)
{
	currentnum=temp%10;
fact=1;

for (int i = 0; i < currentnum; i++)
{
fact = i;
}

sum+=fact;
temp/=10;
}
if(sum == num)
{
	printf("%d is krishnamurthy no:",num);

}
else
{
	printf("%d is not krishnamurthy no:",num);


}
return 0;
}


