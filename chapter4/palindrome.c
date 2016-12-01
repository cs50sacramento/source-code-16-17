/*
*
* Test if a word is a palindrome
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
    // base case: only one or fewer letters is automatically a palindrome
    if (length <= 1)
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

int main(void)
{
    // get word from user
    printf("Enter a word: ");
    string phrase = GetString();
    
    // declare variables for the indexes that start and end the word
    int phraseLen = strlen(phrase);
    int index = 0;
    
    // call function to check for palindrome status
    bool pal = palindrome(phrase, index, phraseLen);
    
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