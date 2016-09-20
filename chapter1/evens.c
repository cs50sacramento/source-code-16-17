/* 
*
* Print the even numbers from 1-100
* Peter Strawn
* CS50 AP
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // use a for loop to print the even numbers from 1-100 (method #1)
    // note: variable names should be more specific, but i1 here stands for "index 1" 
    for (int i1 = 1; i1 <= 100; i1++)    // initialization; condition; update
    {
        if (i1 % 2 == 0)
        {
            printf("%d ", i1);              // execute some code
        }
    }
    
    // use a for loop to print the even numbers from 1-100 (method #2)
    for (int i2 = 2; i2 <= 100; i2 += 2)
    {
        printf("%d ", i2);
    }
    
    // use a while loop to print the even numbers from 1-100
    int i3 = 1;                         // initialization
    while (i3 <= 100)                   // condition
    {
        if (i3 % 2 == 0)                // execute some code
        {
            printf("%d ", i3);
        }
        i3++;                           // update
    }
    
    // use a do-while loop to print the even numbers from 1-100
    int i4 = 1;                         // initialization
    do
    {
        if (i4 % 2 == 0)                // execute some code
        {
        printf("%d ", i4);
        }
        i4++;                           // update
    } while (i4 <= 100);                // condition
    
}