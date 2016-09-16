#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variable for use inside the do-while loop
    int num;
    
    // get user input and validate its range between 1-100
    // declaring num in here means it's not accessible outside the curly braces of the do-while loop
    // variables live only in the "scope" of the most immediate set of curly braces around them
    do
    {
        printf("Give me a number between 1 and 100: ");
        num = GetInt();
    } while (num < 1 || num > 100);
    
    // method one: iterate through each number from 1-100, test for divisibility by using modulo
    // this method is less efficient, but it shows a use case for mod and is simpler as set-up goes
    for (int i = 1; i <= 100; i++)
    {
        if (i % num == 0)
        {
            if ((100 - i) >= num)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d\n", i);
            }
        }
    }
    
    // method two: initialize loop at number, print that value, and update by that number value
    // this method is more efficient, but the for-loop requires an arguably more complex (if only slightly) logic
    for (int i = num; i <= 100; i += num)
    {
        if ((100 - i) >= num)
        {
            printf("%d, ", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }
}