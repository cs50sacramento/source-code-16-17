#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Give me a number between 1 and 100: ");
    int num = GetInt();
    
    for (int i = num; i <= 100; i += num)
    {
        printf("%d\n", i);
    }

}