#include <stdio.h>

// design option 1
// function defined BEFORE being called for the first time
void hello(void)
{
    // print hello, world
    printf("hello, world\n");
}

int main(void)
{
    // call function hello as defined above
    // needs to be defined before "main" since it's not in a header file
    // if defined after "main", will get "implicit declaration of function" error
    // compiler reads from top to bottom and executes code starting with "main"
    // if compiler gets to something it doesn't know (like a function called "hello"), it will raise an error
    hello();
}

