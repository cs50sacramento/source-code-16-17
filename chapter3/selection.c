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

	/* selection sort */
	// track total number of swaps (just for fun)
	int totalSwaps = 0;
	
	// iterate through numbers in unsorted array
	// stop at second-to-last index value since that will make j the last index value
	for (int i = 0; i < LENGTH - 1; i++)
    {
    	// set index of minimum value to i
        int min = i;
        
        // iterate through rest of numbers in list to update minimum value of necessary
        for (int j = i + 1; j < LENGTH; j++)
        {
            if (unsorted[j] < unsorted[min])
            {
                min = j;
            }
        }
        
        // swap positions of i and minimum if i isn't already the minimum
        if (min != i)
        {
            int temp = unsorted[min];
            unsorted[min] = unsorted[i];
            unsorted[i] = temp;
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
