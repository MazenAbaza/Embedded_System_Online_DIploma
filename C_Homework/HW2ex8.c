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
      float x,y;
      char o;
      printf("Please enter your operator: ");
      fflush(stdin);
      fflush(stdout);
      scanf("%c",&o);
      printf("Please enter your numbers: ");
	  fflush(stdin);
	  fflush(stdout);
	  scanf("%f %f",&x,&y);
	  switch (o)
	  {
	  	  case '+':
	  		  printf("%.1f + %.1f = %.1f",x,y,x+y);
	  		  break;
	  	  case '-':
	  		  printf("%.1f - %.1f = %.1f",x,y,x-y);
	  		  break;
	  	  case '*':
	  		  printf("%.1f * %.1f = %.1f",x,y,x*y);
	  		  break;
	  	  case '/':
	  		  printf("%.1f / %.1f = %.1f",x,y,x/y);
	  		  break;
	  	  default:
	  		  printf("error: operation does not exist");
	  		  break;
}



      return 0;
}
