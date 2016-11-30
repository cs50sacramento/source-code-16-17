/*
*
* Test if a phrase is a palindrome
* Peter Strawn
* CS50 AP
*
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool palindrome(string phrase, int start, int length)
{
    // only one letter will also be a palindrome
    if (length == 1)
    {
        return true;
    }
    // compare first letter with last letter (and work inwards from there if the same)
    else if (tolower(phrase[start]) == tolower(phrase[length - 1]))
    {
        return true && palindrome(phrase, start + 1, length - 1);
    }
    else
    {
        return false;
    }
}

string removeSpaces(string phrase)
{
    // determine string length (with spaces)
    int length = strlen(phrase);
    
    // initialize variable for counting number of letters
    int letterCount = 0;
    
    // iterate through string to count letters 
    for (int i = 0; i < length; i++)
    {
        if (isalpha(phrase[i]))
        {
            letterCount++;
        }
    }
    
    // declare memory for new phrase
    string newPhrase = malloc(sizeof(char) * (letterCount + 1));
    
    // copy letters only to new string
    for (int i = 0, j = 0; i < length; i++)
    {
        if (isalpha(phrase[i]))
        {
            newPhrase[j] = phrase[i];
            j++;
        }
    }
    
    // return letter-only string to main
    return newPhrase;
}

int main(void)
{
    // get string from user
    printf("Enter a string: ");
    string phrase = GetString();
    
    // remove non-alphabetical characters from string to compare only letters
    string newPhrase = removeSpaces(phrase);
    
    // declare variables for the indexes that start and end the word
    int phraseLen = strlen(newPhrase);
    int index = 0;
    
    // call function to check for palindrome status
    bool pal = palindrome(newPhrase, index, phraseLen);
    
    // print message to user
    if (pal)
    {
        printf("You entered a palindrome!\n");
    }
    else
    {
        printf("Not a palindrome!\n");
    }
}