/*
*
* Program to demonstrate the syntax of Unit 1
* Peter Strawn
* CS50 AP
*
*/

#include <stdio.h>
#include <cs50.h>

#define COLLEGE 4

int main(void)
{
    int gradeLevel;
    
    do
    {
        printf("Enter your high school grade level (9-12): ");
        gradeLevel = GetInt();
    } while (gradeLevel < 9 || gradeLevel > 12);
    
    int gradYear;
    
    do
    {
        printf("Enter the last two digits of the year you will be graduating: ");
        gradYear = GetInt();
    } while (gradYear < 17 || gradYear > 20);
    
    if (gradeLevel == 9 && gradYear != 20)
    {
        while (gradYear != 20)
        {
            printf("You don't know when you graduate?!? Try again: ");   
            gradYear = GetInt();
        }
    }
    else if (gradeLevel == 10 && gradYear != 19)
    {
        while (gradYear != 19)
        {
            printf("You don't know when you graduate?!? Try again: ");    
            gradYear = GetInt();
        }
    }
    else if (gradeLevel == 11 && gradYear != 18)
    {
        while (gradYear != 18)
        {
            printf("You don't know when you graduate?!? Try again: ");    
            gradYear = GetInt();
        }
    }
    else if (gradeLevel == 12 && gradYear != 17)
    {
        while (gradYear != 17)
        {
            printf("You don't know when you graduate?!? Try again: ");    
            gradYear = GetInt();
        }
    }
    
    for (int i = 0; i < COLLEGE; i++)
    {
        printf("You will be a college student for school year 20%d-20%d.\n", gradYear + i, gradYear + i + 1);
    }
    
    printf("Your 25-year high school reunion will be in 20%d, and your 25-year college reunion will be in 20%d.\nStart planning now!\n", gradYear + 25, gradYear + COLLEGE + 25);
}