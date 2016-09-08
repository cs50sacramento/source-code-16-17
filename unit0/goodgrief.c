/* 
*
* Program to visualize the size of "Good Grief" by Bastille
* Peter Strawn
* CS50 AP
*
*/

#include <stdio.h>
#include <stdlib.h>                     // needed for srand and rand
#include <time.h>                       // needed for time

#define BIT 1                           // 2^0
#define BYTE 8                          // 2^3
#define KILOBYTE 1024*BYTE              // 2^10 * BYTE
#define MEGABYTE 1048576*BYTE           // 2^20 * BYTE
#define GOODGRIEF 1048576*BYTE*7.2      // 7.2 MB = 2^20 * BYTE * 7.2

int main(void)
{
    // seed rand with time
    srand(time(NULL));
    
    // print a random sequence of 0s and 1s the size of "Good Grief" by Bastille
    for (int i = 0; i < GOODGRIEF; i++)
    {
        printf("%d", rand() % 2);
    }
    
    // print new line at end of file
    printf("\n");
}