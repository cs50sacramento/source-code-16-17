#include <stdio.h>

int main(void)
{
    // declare variable count of type int
    int count;  // type followed by variable name
    
    // initialize variable to some value
    count = 3;  // assignment works right to left
    
    // update count to 8
    count = 8;
    
    // declare variable x of type int and initialize it to count's value
    int x = count;
    
    // increment count
    count++;
    
    // print both values
    printf("count is %d and x is %d\n", count, x);
}