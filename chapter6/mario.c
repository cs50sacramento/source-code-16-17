#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do
    {
        printf("Height: ");
        height = GetInt();
    } while (height < 0 || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 2; j++)
        {
            printf("#");
        }    
        printf("\n");
    }
}