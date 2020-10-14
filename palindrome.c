/* Author: Alexander Hughey
 * CS4760 F2020
 * Project 2 - Palindromes
 * child process code for project 2
 * invoked as "palin"
 * ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
 * Purpose of code is to:
 *  - determine if the string is a palindrome;
 *  - execute code to enter critical section;
 *  - sleep for random amount of time (between 0 and 2 seconds);
 *  - **critical section**
 *  - execute code to exit from critical section;
 */
 
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
  char * test_string = "tacocat";
  int length = strlen(test_string);
  
  int i = 0;
  int pal_flag = 1;
  for( i = 0; i < length/2; i++ )
  {
    if(test_string[i] != test_string[length-(i+1)])
    {
      printf("not matching! %c v %c \n", test_string[i], test_string[length-(i+1)]);
      pal_flag = 0;
    }
    else
      printf("match! %c v %c\n", test_string[i], test_string[length-(i+1)]);
  }//end of for loop
  if( pal_flag == 1 ) printf("palindrome!\n");
  else printf("not palindrome!\n");
  
  return 0;
}//end of main