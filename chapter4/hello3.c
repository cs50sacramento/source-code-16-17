#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("enter your name: ");
    string name = get_string();
    
    FILE* file = fopen("names.txt", "a");
    
    if (file == NULL)
    {
        return 1;
    }
    
    fprintf(file, "hello, %s!\n", name);
    
    fclose(file);
    
    return 0;
}