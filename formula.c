/* Lab 8 Part-2
 By - Kaumudi Gupta (A0174617Y)
Email-e0215319@u.nus.edu */

// to generate all the inputs which give fuzz2017 as the output

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#include <fcntl.h>
#include <unistd.h>

int main () 
{
	char command[12];
	int x=20,y=50;
	int t=0;
	int z=0;
	
	while  (x <= 255)
	{ 
		y=50;

		while ( y <= 255)                                                  
		{ 
			sprintf(command, "./L8exe %d %d \n", x, y);
			system(command);
			printf("%s",command);
			if (z < 9)
			{
			 	y++;
				z++;
			}
			else
			{
				y=y+51;
				z=0;
			}
		}
	
		if (t < 9)
		{	printf ("%d",x);
			x++;
			t++;
		}
		else
		{
			x=x+21;
			t=0;
		}
		
		
	}

   return(0);
} 
