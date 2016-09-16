/* 
*
* Determine whether number is positive, negative, or zero
* Peter Strawn
* CS50 AP
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user for input
    printf("Enter an integer: ");
    
    // store input in variable
    int userNum = GetInt();
    
    // test and print out sign of number
    if (userNum > 0)
    {
        printf("Positive!\n");
    }
    else if (userNum < 0)
    {
        printf("Negative!\n");
    }
    else
    {
        printf("Zero!\n");
    }
}