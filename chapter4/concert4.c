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
    
    printf("How many concerts would you like to enter information for? ");
    int concertNum = GetInt();
    
    struct concert concerts[concertNum];
    
    FILE* file = fopen("concerts.csv", "w");
    fprintf(file, "Artist,Venue,Year\n");
    
    for (int i = 0; i < concertNum; i++)
    {
        printf("Artist: ");
        concerts[i].artist = GetString();
        
        printf("Venue: ");
        concerts[i].venue = GetString();
        
        printf("Year: ");
        concerts[i].year = GetInt(); 
        
        fprintf(file, "%s,%s,%d\n", concerts[i].artist, concerts[i].venue, concerts[i].year);
    }

    fclose(file);
}