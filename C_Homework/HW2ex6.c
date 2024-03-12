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
      int num,sum,count;
      sum = 0;
      printf("Enter your number: \n");
      fflush(stdin);
      fflush(stdout);
      scanf("%d", &num);
      for(count =1;count<=num;count++){
    	  sum+=count;
      }
      printf("%d",sum);
      return 0;
}
