#include <cs50.h>
#include <stdio.h>

float cToF(float tempC);

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

float cToF(float tempC)
{
    // return temp in F
    return tempC * 9 / 5 + 32;
}