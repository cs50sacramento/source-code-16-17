#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// declare main so that it takes input from command line
int main(int argc, string argv[])
{
    // validate user input of exactly two command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./allcaps <one additional command-line argument>\n");
        return 1;
    }
    
    // iterate through argv[0] to capitalize each letter
    for (int i = 0, j = strlen(argv[0]); i < j; i++)
    {
        printf("%c", toupper(argv[0][i]));
    }
    
    // separate arguments by a space
    printf(" ");
    
    // iterate through argv[0] to capitalize each letter
    for (int i = 0, j = strlen(argv[1]); i < j; i++)
    {
        printf("%c", toupper(argv[1][i]));
    }
    
    // print new line
    printf("\n");
}