/* Lab 8 Part 1
 By - Kaumudi Gupta (A0174617Y)
Email-e0215319@u.nus.edu  */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <regex.h>

#define tofind    "[a-zA-Z][a-zA-Z][a-zA-Z][a-zA-Z][0-9][0-9][0-9][0-9]"                 // for secret code

int main(int argc, char **argv)
{
    FILE *fp;                                                                            // for opening the file
    char line[1024];
    int retval = 0;
    regex_t re;
    const char *filename = "Result";

    if (argc > 1)
        filename = argv[1];

    if (regcomp(&re, tofind, REG_EXTENDED) != 0)                                         // regcomp used to convert a regular expression 										into a form that is suitable for subsequent regexec() searches. 
    {
        fprintf(stderr, "Failed to compile regex '%s'\n", tofind);
        return EXIT_FAILURE;
    }

    fp = fopen(filename, "r");                                                         // opens the file Result which contains the output of 													the binary file 
    if (fp == 0)									// if failed to open the file
    {
        fprintf(stderr, "Failed to open file %s (%d: %s)\n",
                filename, errno, strerror(errno));
        return EXIT_FAILURE;
    }

    while ((fgets(line, 1024, fp)) != NULL)						//checks and prints the desired string from the file
    {
        line[strlen(line)-1] = '\0';
        if ((retval = regexec(&re, line, 0, NULL, 0)) == 0)
        {    printf("<<%s>>\n", line);
	
    } }
    return EXIT_SUCCESS;
}
