#include "main.h"

/**
 * _memset - fills a memory with a specific value
 * @s: beginning address of memory filled
 * @b: value desired
 * @n: bytes number to be changed
 * Return: array changed with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
