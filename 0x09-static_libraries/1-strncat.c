#include "main.h"

/**
 * _strncat - function to concantenate two strings
 * using from src n bytes
 * @dest: value entered
 * @src: entered value
 * @n: value entered
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}

