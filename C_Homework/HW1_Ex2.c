/*
 * assignment1.c
 *
 *  Created on: Feb 21, 2024
 *      Author: Abaza
 */


#include "stdio.h"
void main ()
{
	int i;
	printf("Enter your number: ");
	fflush(stdout);
	scanf("%d",&i);
	fflush(stdin);
	printf("Your number is: %d",i);
}
