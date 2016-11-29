#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please enter a number: ");
    int num = GetInt();
    
    int numCopy = num;
    
    int ans = 1;
    
    while (numCopy > 0)
    {
        ans *= numCopy;
        numCopy--;
    }
    
    printf("%d! = %d\n", num, ans);
}