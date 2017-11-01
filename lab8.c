/* Lab 8 Part 2
 By - Kaumudi Gupta (A0174617Y)
Email-e0215319@u.nus.edu */




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#include <fcntl.h>
#include <unistd.h>

int main () 
{
	char command[12];
	int x=0,y=0;
	int file = open("Result", O_CREAT|O_WRONLY, S_IRWXU);                          // for creating the file to store output
	for (x=0; x<=255; x++)
	{ 
		for(y=0;y<=255;y++)                                                   
			{ 
			sprintf(command, "./L8exe %d %d", x,y);
			
			dup2(file,1);							// storing the values if all the possible outputs 
			printf("%s \n",command);				
			system(command);						// for executing the command
			}
	}
   return(0);
} 
