#include "main.h"
#include <stdlib.h>

/**
 * *create_array - arrays of chars to be created and initializes
 * it with a specific char
 * @c: initialized char
 * @size: allocated number of bytes
 *
 * Return: array to a pointer or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
