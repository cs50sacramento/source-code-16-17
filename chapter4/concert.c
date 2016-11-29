#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Artist: ");
    string artist = GetString();
    
    printf("Venue: ");
    string venue = GetString();
    
    printf("Year: ");
    int year = GetInt();
    
    printf("You saw %s at %s in %d.\n", artist, venue, year);
}