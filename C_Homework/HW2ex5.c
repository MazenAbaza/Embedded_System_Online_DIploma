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
      char a;
      printf("Enter your char: \n");
      fflush(stdin);
      fflush(stdout);
      scanf("%c", &a);
      if ((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
    	  printf("%c is alphabet", a);
      else
    	  printf("%c is not alphabet");

      return 0;
}
