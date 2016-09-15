/* 
*
* Prints letter grade based on percent
* Peter Strawn
* CS50 AP - F Block
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt the user to enter a percent
    printf("Enter a valid grade: ");
    
    // make an integer and set it equal to user input
    int userGrade = GetInt();
    
    // if grade is 90 or above, print A
    if (userGrade >= 90)
    {
        printf("You got an A!\n");
    }
    else if (userGrade >= 80)
    {
        printf("You got a B!\n");
    }
    else if (userGrade >= 70)
    {
        printf("You got a C!\n");
    }
    else
    {
        printf("You got a D!\n");
    }
}