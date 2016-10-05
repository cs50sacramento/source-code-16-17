#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // equivalent ways of storing words in string
    string hello = "hello";                             // automatically null-terminated
    char hello2[5] = "hello";                           // not null-terminated
    char hello3[5] = {'h', 'e', 'l', 'l', 'o'};         // not null-terminated
    
    // index through word, printing one letter per line
    for (int i = 0, j = strlen(hello); i < j; i++)
    {
        printf("hello[%d]: %c\n", i, hello[i]);
    }
    printf("\n");
    
    for (int i = 0, j = strlen(hello2); i < j; i++)
    {
        printf("hello2[%d]: %c\n", i, hello2[i]);
    }
    printf("\n");
    
    for (int i = 0, j = strlen(hello3); i < j; i++)
    {
        printf("hello3[%d]: %c\n", i, hello3[i]);
    }
}