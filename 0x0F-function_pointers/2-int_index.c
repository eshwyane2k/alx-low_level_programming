#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array:	Array from main
 * @size:	length of array
 * @cmp:	pointer
 * Return:	position of the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int sz;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (sz = 0; sz < size; sz++)
	{
		if (cmp(array[sz]) != 0)
			return (sz);
	}
	return (-1);
}
