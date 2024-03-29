#include <stdio.h>
#include "function_pointers.h"


/**
 * int_index - a function that searches for an integer
 * @size: number of elements in the array array
 * @array: array input
 * @cmp: pointer to the function to be used to compare values
 * Return: (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < -1 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
