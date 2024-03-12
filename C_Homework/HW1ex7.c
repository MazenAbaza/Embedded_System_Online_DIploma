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
      float a, b, temp;
      printf("Enter value of a: ");
  	  fflush(stdin);
  	  fflush(stdout);
  	  scanf("%f",&a);
  	  printf("\n");
      printf("Enter value of b: ");
  	  fflush(stdin);
  	  fflush(stdout);
      scanf("%f",&b);
      printf("\n");
      temp = a;
      a = b;
      b = temp;
      printf("After swapping, value of a = %f\n", a);
      printf("After swapping, value of   b = %f", b);
      return 0;
}
