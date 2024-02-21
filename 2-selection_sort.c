#include "sort.h"

/**
 * selection_sort - sorts an array of integers using a selction sort
 * algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void selection_sort(int *array, size_t size)
{
	int k, j, min_j, temp, n = (int)size;

	if (!array || size < 2)
		return;

	/* at every position in the n-member array */
	for (k = 0; k < n - 1; k++)
	{
		/* scan from that position to the end, */
		min_j = k;
		for (j = k + 1; j < n; j++)
		{
			/* determine the minimum value in that range */
			if (array[j] < array[min_j])
			{
				min_j = j;
			}
		}
		/* and if it is lower than the value at start of range, */
		/* swap them */
		if (min_j != k)
		{
			temp = array[k];
			array[k] = array[min_j];
			array[min_j] = temp;
			print_array(array, size);
		}
	}
}
