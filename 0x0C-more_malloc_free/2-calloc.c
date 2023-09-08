#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: the number of elements
 * @size: the byte size of each array element
 *
 * Return: if nmemb = 0, size = 0 or the function falls -NULL
 *		Otherwise -  a pointer to the allocated memmory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr =  malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
