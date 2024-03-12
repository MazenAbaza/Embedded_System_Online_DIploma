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
      printf("Enter your Number: \n");
      fflush(stdin);
      fflush(stdout);
      scanf("%d", &a);
      if (a>0)
    	  printf("%d is positve", a);
      else if (a<0)
    	  printf("%d is the negative", a);
      else
    	  printf("You entered zero");

      return 0;
}
