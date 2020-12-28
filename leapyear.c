/*
 ============================================================================
 Name        : leapyear.c
 Author      : shiv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
int y;
scanf("%y",&y);

if (y%4==0) {
	printf("is a  leap year",y);

}
else if (y%100==0) {
	printf("not a leap year",y);

}
else if (y%400==0) {
	printf("it is a leap year",y);


}
else {
	printf("not a year",y);


}
return 0;
}
