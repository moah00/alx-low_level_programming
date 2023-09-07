#include <stdlib.h>
#include "main.h"

/**
 **array_range - creates an array of integers
 *@min: minimum range of values stored
 *@max: maximum range of values stored and number of elements
 *
 *Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i = 0;
	int size = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
