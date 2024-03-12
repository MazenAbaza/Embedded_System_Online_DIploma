/*
 ============================================================================
 Name        : HW1.c
 Author      : abaza
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Hi\n");
	printf("Enter a character: ");
	char c;
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	printf("ASCII valussssue of %c = %d",c,c);

	return 0;
}
