#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // check that argc is 1
    if (argc != 1)
    {
        printf("Usage: ./return2\n");
        printf("Do not supply additional command line arguments like \"%s\".\n", argv[1]);
        printf("Please try again.\n");
        return 1;
    }
    
    // print hello world message
    printf("hello, world\n");
    
    // return 0 to indicate no problems
    return 0;
}