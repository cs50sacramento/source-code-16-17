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
	
	// bubble sort
	int swaps = -1;
	
	while (swaps != 0)
	{
		swaps = 0;
		for (int i = 0; i < LENGTH - 1; i++)
		{
			if (unsorted[i] > unsorted[i+1])
			{
				int temp = unsorted[i];
				unsorted[i] = unsorted[i+1];
				unsorted[i+1] = temp; 
				swaps++;
			}
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
