#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("state your name: ");
    string userName = GetString();
    printf("hello, %s\n", userName);
}