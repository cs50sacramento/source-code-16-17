/* 
*
* Program to visualize the size of one megabyte
* Peter Strawn
* CS50 AP
*
*/

#include <stdio.h>
#include <stdlib.h>                     // needed for srand and rand
#include <time.h>                       // needed for time

#define BIT 1                           // 2^0
#define BYTE 8                          // 2^3
#define KILOBYTE 1024*BYTE              // 2^10
#define MEGABYTE 1048576*BYTE           // 2^20

int main(void)
{
    // seed rand with time
    srand(time(NULL));
    
    // print a random sequence of 0s and 1s the size of a megabyte
    for (int i = 0; i < MEGABYTE; i++)
    {
        printf("%d", rand() % 2);
    }
        
    // print new line at end of file
    printf("\n");
}