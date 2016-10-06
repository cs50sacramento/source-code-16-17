#include <stdio.h>

int main(void)
{
    // return 0 to indicate no problems
    return 0;
    
    // code never gets here because I've already returned a value to main
    // once I "give back" an int to main by using "return", execution stops
    // print hello world message
    printf("hello, world\n");
}