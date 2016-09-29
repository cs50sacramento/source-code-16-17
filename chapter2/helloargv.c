#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // check that there are exactly two command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./helloargv <first name>\n");
        return 1;
    }
    
    // greet user
    printf("Hello, %s!\n", argv[1]);
}