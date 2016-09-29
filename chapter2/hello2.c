#include <stdio.h>

// design option 2
// function prototype given BEFORE main but defined AFTER
// note: function prototypes end in semi-colons
void hello(void);

int main(void)
{
    // call function print as defined below
    hello();
}

void hello(void)
{
    // print hello, world
    printf("hello, world\n");
}