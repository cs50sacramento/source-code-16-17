#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter your name: ");
    string userName = GetString();
    printf("Enter your age: ");
    int userAge = GetInt();
    int nextAge = userAge + 1;
    printf("Hello, %s! You will be %d years old on your next birthday!\n", userName, nextAge);
}