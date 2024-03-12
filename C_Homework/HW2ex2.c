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
      printf("Enter your character: \n");
      fflush(stdin);
      fflush(stdout);
      scanf("%c",&a);
      if (a=='a'||a=='A'||a=='e'||a=='E'||a=='o'||a=='O'||a=='i'||a=='I'||a=='u'||a=='U')
    	  printf("Your letter is vowel");
      else
    	  printf("Your letter is not vowel");

      return 0;
}
