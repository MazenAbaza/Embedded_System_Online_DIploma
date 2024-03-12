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
      int num,count;
      unsigned long long int factorial= 1;
      printf("Enter your number: \n");
      fflush(stdin);
      fflush(stdout);
      scanf("%d", &num);
      if (num<0)
    	  printf("Facotrial can not be calculated for negative numbers");
      else if (num>0){
    	  for(count =1;count<=num;count++){
    		  factorial*=count;
    	      	  }
    	  printf("Factorial %d: %lu",num,factorial);
      }

      else
    	  printf("Factorial 0: 1");




      return 0;
}
