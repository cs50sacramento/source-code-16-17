#include <stdio.h>
#include <cs50.h>

// function takes in an integer to determine how many times to say hello
void hello(int x);

int main(void)
{
    int hellos;
    
    do
    {
        printf("How many hellos would you like to say?\n");
        hellos = GetInt();
    } while (hellos < 1);
    
    hello(hellos);
}

void hello(int times)
{
    while (times > 0)
    {
        // print hello, world
        printf("hello, world\n");
        times--;
    }
}