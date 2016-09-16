/* 
*
* Determine whether number is positive, negative, or zero using functions
* Peter Strawn
* CS50 AP
*
*/

#include <stdio.h>
#include <cs50.h>

// function prototypes
void posNeg(int);
void evenOdd(int);

int main(void)
{
    // prompt user for input
    printf("Enter an integer: ");
    
    // store input in variable
    int userNum = GetInt();
    
    posNeg(userNum);
    
    evenOdd(userNum);
}
    
void posNeg(x)
{
    // test and print out sign of number
    if (x > 0)
    {
        printf("Positive!\n");
    }
    else if (x < 0)
    {
        printf("Negative!\n");
    }
    else
    {
        printf("Zero!\n");
    }
}

void evenOdd(x)
{
    // test and print out even/odd (bonus modulo test!)
    if (x % 2 == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}