#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("enter your name: ");
    string name = get_string();
    
    printf("hello, %s!\n", name);
    
    return 0;
}