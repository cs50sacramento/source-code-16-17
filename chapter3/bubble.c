/*
*
* Implement bubble sort
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
	
	/* bubble sort */
	// set swaps to any non-zero value
	int swaps = -1;
	
	// track total number of swaps (just for fun)
	int totalSwaps = 0;
	
	// repeat until no more swaps (i.e. list is sorted)
	while (swaps != 0)
	{
		// set swaps to zero
		swaps = 0;
		
		// iterate through numbers in unsorted array
		for (int i = 0; i < LENGTH - 1; i++)
		{
			// if a number is greater than the number on its right, swap their positions
			if (unsorted[i] > unsorted[i+1])
			{
				int temp = unsorted[i];
				unsorted[i] = unsorted[i+1];
				unsorted[i+1] = temp; 
				
				// increment swaps variable for each swap
				swaps++;
				totalSwaps++;
			}
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
