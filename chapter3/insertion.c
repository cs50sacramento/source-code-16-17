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

	// insertion sort
	for (int i = 1; i < LENGTH; i++)
    {
        int value = unsorted[i];
        int sorted = i;
        
        while (sorted > 0 && unsorted[sorted-1] > value)
        {
            int temp = unsorted[sorted-1];
            unsorted[sorted-1] = unsorted[sorted];
            unsorted[sorted] = temp;
            sorted -= 1;
        }
        unsorted[sorted] = value;
    }
	
	// print sorted array
	printf("Sorted\n");
	for (int i = 0; i < LENGTH; i++)
	{
		printf("unsorted[%d]: %d\n", i, unsorted[i]);
	}
	printf("\n");
}
