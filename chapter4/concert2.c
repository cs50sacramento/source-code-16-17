#include <cs50.h>
#include <stdio.h>

int main(void)
{
    struct concert
    {
        string artist;
        string venue;
        int year;
    };
    
    struct concert switchfoot;
    
    printf("Artist: ");
    switchfoot.artist = GetString();
    
    printf("Venue: ");
    switchfoot.venue = GetString();
    
    printf("Year: ");
    switchfoot.year = GetInt();
    
    printf("You saw %s at %s in %d.\n", switchfoot.artist, switchfoot.venue, switchfoot.year);
}