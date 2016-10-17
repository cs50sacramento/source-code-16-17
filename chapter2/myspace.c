#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// declare main so that it takes input from command line
int main(int argc, string argv[])
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0, k = strlen(argv[i]); j < k; j++)
        {
            if (j % 2 == 0)
            {
                printf("%c", toupper(argv[i][j]));
            }
            else
            {
                printf("%c", tolower(argv[i][j]));
            }
            printf(" ");
        }
        printf(" ");
    }

    printf("\n");
}