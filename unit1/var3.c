#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // examples of data types
    char strikeout = 'K';   // 1 byte of memory for a character
    string className = "This is CS50."; // 4 or 8 bytes of memory for text
    int age = 29;           // 4 bytes of memory for an int
    long long anotherAge = 63;          // 8 bytes of memory for an int
    float pi = 3.14;        // 4 bytes of memory for a real number
    double morePi = 3.1415962;          // 8 bytes of memory for a real number
    bool fun = true;        // 1 byte of memory for true/false
    
    // print-outs of data types
    printf("strikeout: %c\n", strikeout);
    printf("className: %s\n", className);
    printf("age: %d\n", age);
    printf("anotherAge: %lld\n", anotherAge);
    printf("pi: %f\n", pi);
    printf("morePi: %f\n", morePi);
    printf("fun: %d\n", fun);
}