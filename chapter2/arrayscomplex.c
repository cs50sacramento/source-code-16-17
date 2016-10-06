#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // store word in string
    string hello = "hello";
    
    // print whole string
    printf("%s\n", hello);
    
    // print memory address of hello
    printf("memory location of the variable \"hello\": %p\n", &hello);
    
    // index through word, printing one letter per line along with the address of the array elements
    for (int i = 0, j = strlen(hello); i < j; i++)
    {
        printf("hello[%d]: %c\tmemory location: %p\n", i, *(hello+i), &hello[i]);
    }
}