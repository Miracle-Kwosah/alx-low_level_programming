#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm; not guaranteed to return the lowest index if `value`
 * appears multiple times in `array`
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @target: value to search for
 *
 * Return: Index containing `target`, or -1 if `target` not found or
 * `array` is NULL
 */
int binary_search(int *array, size_t size, int target)
{
	int start, end, middle;
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		middle = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%i%s", array[i], i == end ? "\n" : ", ");
		if (array[middle] < target)
			start = middle + 1;
		else if (array[middle] > target)
			end = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
