#include <cs50.h>
#include <stdio.h>
#include "tempcon.h"

void promptC(void);
void promptF(void);

int main(void)
{
    int choice;
    
    do
    {
        printf("Type 1 to convert C to F, then press enter\n");
        printf("Type 2 to convert F to C, then press enter\n");
        choice = GetInt();
    } while (choice != 1 && choice != 2);
    
    if (choice == 1)
    {
        promptC();
    }
    else
    {
        promptF();
    }
}

void promptC(void)
{
    // get temp in C from user
    printf("C: ");
    float tempC = GetFloat();
    
    // call function cToF() to get temp in F
    float tempF = cToF(tempC);

    // print temp in F
    printf("F: %.1f\n", tempF);
}

void promptF(void)
{
    // get temp in C from user
    printf("F: ");
    float tempF = GetFloat();
    
    // call function fToC() to get temp in C
    float tempC = fToC(tempF);

    // print temp in C
    printf("C: %.1f\n", tempC);    
}