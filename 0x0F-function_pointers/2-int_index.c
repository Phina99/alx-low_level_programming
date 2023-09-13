#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searchs for an integer.
 * @array:name passed
 * @size: Number of iterations
 * @cmp: points to a function
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
