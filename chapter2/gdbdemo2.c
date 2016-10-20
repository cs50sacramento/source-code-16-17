#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("Welcome to this program where we multiply the number of command-line arguments by 10!\n");
    
    argc *= 10;
    
    printf("Your first command-line argument is %s.\n", argv[0]);
    
    printf("The number of arguments multiplied by 10 is %d.\n", argc);
}