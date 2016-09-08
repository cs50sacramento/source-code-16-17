#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user for age and print result
    printf("Enter your age: ");
    int userAge = GetInt();
    printf("The user's age is %d.\n", userAge);
}