/*
 * HW1_ex3.c
 *
 *  Created on: Feb 24, 2024
 *      Author: Abaza
 */


#include <stdio.h>

int main () {
	fflush(stdin);
	fflush(stdout);
    	float x, y, sum;
    	printf("Please enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
   	scanf("%f %f",&x,&y);
	fflush(stdin);
	fflush(stdout);

   	sum=x*y;
    	printf("Sum: %f",sum);
    	return 0;
}
