#include <cs50.h>
#include <stdio.h>
#include "fahr.h"

int main(void)
{
    // get temp in C from user
    printf("C: ");
    float tempC = GetFloat();
    
    // call function cToF() to get temp in F
    float tempF = cToF(tempC);
    
    // print temp in F
    printf("F: %.1f\n", tempF);
}