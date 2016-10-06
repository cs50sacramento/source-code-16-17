#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare an array to hold three ints
    int birthday[3];
    
    // initialize each element of array
    birthday[0] = 10;
    birthday[1] = 16;
    birthday[2] = 77;
    // birthday[3] = 42;        // can't do this!
    // int birthday[3] = { 10, 16, 77 };
    
    // update values
    birthday[2] = birthday[0] + birthday[1];    // now 26
    birthday[0] = birthday[1] - birthday[0];    // now 6
    
    // determine size of array
    int birthdaysize = sizeof(birthday);
    int intsize = sizeof(int);
    int arrayelements = birthdaysize / intsize;
    
    // print sizeof array and size of int
    printf("Size of array: %d\n", birthdaysize);
    printf("Size of integer: %d\n", intsize);
    printf("Number of elements in array: %d\n\n", arrayelements);
    
    // print elements in birthday array
    for (int i = 0; i < arrayelements; i++)
    {
        printf("birthday[%d]: %d\n", i, birthday[i]);
    }
}