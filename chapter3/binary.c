/*
*
* Implement binary search
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
	int sorted[LENGTH] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	// get needle to find in haystack
	printf("Tell me the integer you are looking for: ");
	int needle = GetInt();

	
	// divide and conquer to find it
	int min = 0;
	int max = LENGTH - 1;
	
	while (min <= max)
	{
		int mid = (min + max) / 2;
		
		if (needle == sorted[mid])
		{
			printf("Needle found at %d!\n", mid);
			return 0;
		}
		else if (needle > sorted[mid])
		{
			min = mid + 1;
		}
		else if (needle < sorted[mid])
		{
			max = mid - 1;
		}
	}
	
	printf("Needle not in haystack!\n");
	return 1;
}
