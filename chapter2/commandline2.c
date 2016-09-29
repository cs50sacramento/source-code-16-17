/*
*
* Program to print the number of command-line arguments - v.2
* Peter Strawn
* CS50 - AP
*
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    // print the number of arguments stored in variable argc
    if (argc == 1)
    {
        printf("There is %d command-line argument.\n\n", argc);
    }
    else
    {
        printf("There are %d command-line arguments.\n\n", argc);
    }
    
    // iterate through the command-line arguments and their individual characters
    for (int i = 0; i < argc; i++)
    {
        // print the arguments themselves stored in argv[]
        printf("argv[%d]: %s\n", i, argv[i]);
        
        // print individuals chearacters of each argv[] (two-dimensional array)
        for (int j = 0; j < strlen(argv[i]); j++)
        {
            printf("argv[%d][%d]: %c\n", i, j, argv[i][j]);
        }
        printf("\n");
    }
}