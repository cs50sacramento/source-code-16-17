#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // store word in string
    string hello = "hello";
    
    // index through word, printing one letter per line
    for (int i = 0, j = strlen(hello); i < j; i++)
    {
        printf("hello[%d]: %c\n", i, hello[i]);
    }
}