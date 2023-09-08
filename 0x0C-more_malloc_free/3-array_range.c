#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum number in the array
 * @max: maximum number in the array
 * Return: if min > max or function fails - NULL
 *		otherwise return the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *num;
	int i = 0;
	int size = ((max - min) + 1);

	if (min > max)
		return (NULL);

	num = malloc(sizeof(int) * size);

	while (min <= max)
	{
		num[i] = min;
		min++;
		i++;
	}
	if (num == NULL)
		return (NULL);
	return (num);
}
