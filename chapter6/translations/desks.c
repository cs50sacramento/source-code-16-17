#include <cs50.h>
#include <stdio.h>

int countSeats(int num)
{
    // base case
    if (num == 0)
    {
        return 0;  
    }
    // recursive call
    else 
    {
        return 3 + countSeats(num - 1);   
    }
}

int main(void)
{
    printf("Enter number of desks: ");
    int desks = GetInt();
    
    int seats = countSeats(desks);
    
    printf("You can accommodate %d students with %d desk(s).\n", seats, desks);
}