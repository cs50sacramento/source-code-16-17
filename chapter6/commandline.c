#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // print the number of arguments
    if (argc == 1)
    {
        printf("There is %d command-line argument.\n\n", argc);
    }
    else
    {
        printf("There are %d command-line arguments.\n\n", argc);
    }
    
    // print the arguments themselves
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
}