#include <cs50.h>
#include <stdio.h>

void cToF(float temp);

int main(void)
{
    // get temp in C from user
    printf("C: ");
    float tempC = GetFloat();
    
    cToF(tempC);
}

void cToF(float tempC)
{
    // convert and print temp in F
    printf("F: %.1f\n", (((tempC * 9) / 5) + 32));
}