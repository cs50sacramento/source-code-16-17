#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // store word in string
    string hello1 = "hello";
    string hello2 = "hello2";
    string hello3 = "hello3";
    
    // print memory addresses of variables
    printf("memory location of the variable \"hello1\": %p\n", &hello1);
    printf("memory location of the variable \"hello2\": %p\n", &hello2);
    printf("memory location of the variable \"hello3\": %p\n", &hello3);
    
    // index through word, printing one letter per line along with the address of the array elements
    for (int i = 0, j = strlen(hello1); i < j; i++)
    {
        printf("hello[%d]: %c\tmemory location: %p\n", i, *(hello1+i), &hello1[i]);
    }
    printf("\n");
    for (int i = 0, j = strlen(hello2); i < j; i++)
    {
        printf("hello[%d]: %c\tmemory location: %p\n", i, *(hello2+i), &hello2[i]);
    }
    printf("\n");
    for (int i = 0, j = strlen(hello3); i < j; i++)
    {
        printf("hello[%d]: %c\tmemory location: %p\n", i, *(hello3+i), &hello3[i]);
    }
}