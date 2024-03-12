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
int main(){
      int a;
      printf("Enter your number: \n");
      fflush(stdin);
      fflush(stdout);
      scanf("%d",&a);
      if ((a%2==0))
    	  printf("Your number is even");
      else
    	  printf("Your number is odd");

      return 0;
}
