#include <cs50.h>
#include <stdio.h>
#include "tempcon.h"

int main(void)
{
    // get temp in C from user
    printf("C: ");
    float tempC = GetFloat();
    
    // call function cToF() to get temp in F
    float tempF = cToF(tempC);
    
    // print temp in F
    printf("F: %.1f\n", tempF);
    
    // just for fun...convert back to C
    float newTempC = fToC(tempF);
    
    // print temp in C
    printf("C: %.1f\n", newTempC);
}