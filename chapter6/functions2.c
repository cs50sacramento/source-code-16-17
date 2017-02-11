#include <stdio.h>

void hello(int x)
{
    while (x > 0)
    {
        printf("hello, world!\n");
        x--;
    }
}

int main(void)
{
    hello(3);
    return 0;
}