/* 
*
* Program to visualize the size of one bit
* Peter Strawn
* CS50 AP
*
*/

#include <stdio.h>
#include <stdlib.h>                     // needed for srand and rand
#include <time.h>                       // needed for time

#define BIT 1                           // 2^0

int main(void)
{
    // seed rand with time
    srand(time(NULL));
    
    // print a random sequence of 0s and 1s the size of a bit
    for (int i = 0; i < BIT; i++)
    {
        printf("%d", rand() % 2);
    }
    
    // print new line at end of file
    printf("\n");
}