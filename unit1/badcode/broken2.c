#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Oh hai!"\n);
    printf("What's your name?\n")
    string userName = GetString();
    print("Nice to meet you! Have a great day, %s!\n", userName);
}