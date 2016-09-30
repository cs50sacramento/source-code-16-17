#include <stdio.h>
#include <cs50.h>

// function declaration
void greetUser(string name, string age);

int main(void)
{
    // prompt user for name
    printf("Enter your name: ");
    string userName = GetString();
    
    printf("Enter your age: ");
    string userAge = GetString();
    
    // call function to say hello to user
    greetUser(userName, userAge);
}

// write a function that takes in a user's name and says hello
void greetUser(string name, string age)
{
    printf("Hello, %s! You said you are %s!\n", name, age);
}