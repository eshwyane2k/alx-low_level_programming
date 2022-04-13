#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array:  pointer of an array from main
 * @size:	lenght of array
 * @action:  is a void pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int x))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0U; i < size; ++i)
			action(array[i]);
	}
}
