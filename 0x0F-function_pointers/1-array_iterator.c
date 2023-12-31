#include "function_pointers.h"

/**
 * array_iterator - excutes a function on each element of an array
 * @array: array to be targeted
 * @size: size of array
 * @action: function to be exec
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
