#include <stdio.h>

// function takes in an integer to determine how many times to say hello
void hello(int x);

int main(void)
{
    hello(100);
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