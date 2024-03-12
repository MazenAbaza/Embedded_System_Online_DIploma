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
      int a,b,c;
      printf("Enter your Numbers: \n");
      fflush(stdin);
      fflush(stdout);
      scanf("%d %d %d", &a,&b,&c);
      if (a>=b&&a>=c)
    	  printf("%d is the largest number", a);
      else if (b>=c)
    	  printf("%d is the largest number", b);
      else
    	  printf("%d is the largest number", c);

      return 0;
}
