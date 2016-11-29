#include <cs50.h>
#include <stdio.h>

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

int main(void)
{
    printf("Please enter a number: ");
    int num = GetInt();
    
    int ans = fact(num);
    
    printf("%d! = %d\n", num, ans);
}