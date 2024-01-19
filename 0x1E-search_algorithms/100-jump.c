#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	step = (int)sqrt(size);
	prev = 0;
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (prev + step >= (int)size)
		{
			break;
		}
		prev += step;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);
	for (i = prev - step; i <= prev && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
