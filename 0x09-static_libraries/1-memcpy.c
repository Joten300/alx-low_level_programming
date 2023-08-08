#include "main.h"

/**
 * _memcpy - memories area to be copied
 * @dest: stored memory
 * @src: copied memory
 * @n: bytes number
 * Return: bytes changed with copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int i = n;

	for (; q < i; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
