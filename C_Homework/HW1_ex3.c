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
    	int x, y, sum;
    	printf("Please enter two integers: ");
	fflush(stdin);
	fflush(stdout);
    	scanf("%d %d",&x,&y);
	fflush(stdin);
	fflush(stdout);

    	sum=x+y;
    	printf("Sum: %d",sum);
    	return 0;
}
