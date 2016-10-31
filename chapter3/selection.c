/*
*
* Implement selection sort
* Peter Strawn
* CS50 AP
*
*/

#include <cs50.h>
#include <stdio.h>

#define LENGTH 10

int main(void)
{
	// declare array of 10 numbers
	int unsorted[LENGTH] = { 9, 7, 3, 4, 2, 8, 1, 6, 0, 5 };
	
	// print unsorted array
	printf("Unsorted\n");
	for (int i = 0; i < LENGTH; i++)
	{
		printf("unsorted[%d]: %d\n", i, unsorted[i]);
	}
	printf("\n");

	// selection sort
	for (int i = 0; i < LENGTH - 1; i++)
    {
        int min = i;
        
        for (int j = i + 1; j < LENGTH; j++)
        {
            if (unsorted[j] < unsorted[min])
            {
                min = j;
            }
        }
        
        if (min != i)
        {
            int temp = unsorted[min];
            unsorted[min] = unsorted[i];
            unsorted[i] = temp;
        }
    }
	
	// print sorted array
	printf("Sorted\n");
	for (int i = 0; i < LENGTH; i++)
	{
		printf("unsorted[%d]: %d\n", i, unsorted[i]);
	}
	printf("\n");
}
