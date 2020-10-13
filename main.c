/* Author: Alexander Hughey
 * CS4760 F2020
 * Project 2 - Palindromes
 * main driver for project 2
 * invoked as "master"
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <sys/time.h>

int main(int argc, char* argv[])
{
  int opt;
  //processes command line arguments
  while((opt = getopt(argc, argv, ":hn:s:t:")) != -1)
  {
  
    switch(opt)
    {
      case 'h':
        //pr_limit = atoi(optarg);
        printf("called with h option\n");
        break;
      case 'n':
        //pr_limit = atoi(optarg);
        printf("called with n option\n");
        break;
      case 's':
        //pr_limit = atoi(optarg);
        printf("called with s option\n");
        break;
      case 't':
        //pr_limit = atoi(optarg);
        printf("called with t option\n");
        break;
      case ':':
        fprintf(stderr, "option needs a value\n");
        perror("ERROR: ");
        return(-1);
        break;
      case'?':
        fprintf(stderr, "unknown option: %s\n", opt);
        perror("ERROR: ");
        return(-1);
        break;
    }//end of switch
    
    for(; optind < argc; optind++)
		{      
      printf("extra arguments: %s\n", argv[optind]);  
    }//end of for L2
    
  }//end of while loop
   return 0;
}//end of main