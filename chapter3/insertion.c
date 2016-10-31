/*
*
* Implement insertion sort
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

	/* insertion sort */
	// track total number of swaps (just for fun)
	int totalSwaps = 0;
	
	// iterate through numbers in the unsorted list (i.e. start at index 1)
	for (int i = 1; i < LENGTH; i++)
    {
    	// set second item in the array as the first unsorted item
    	// by default, unsorted[0] is already a sorted array of one item
        int sortValue = unsorted[i];
        
        // set index of second item in the array as the first unsorted item
        int sortIndex = i;
        
        // move sortValue down the list so long as two conditions are met:
        // 1. sortIndex does not go below 1 since it's being compared with the number to its left
        // 2. sortValue is less than the value to its left in the array
        while (sortIndex > 0 && unsorted[sortIndex - 1] > sortValue)
        {
            int temp = unsorted[sortIndex - 1];
            unsorted[sortIndex - 1] = unsorted[sortIndex];
            unsorted[sortIndex] = temp;
            sortIndex--;
            totalSwaps++;
        }
    }
	
	// print sorted array
	printf("Sorted\n");
	for (int i = 0; i < LENGTH; i++)
	{
		printf("unsorted[%d]: %d\n", i, unsorted[i]);
	}
	printf("\nTotal number of swaps: %d\n", totalSwaps);
}
