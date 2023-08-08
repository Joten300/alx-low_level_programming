#include "main.h"

/**
 * _strncpy - function that copy a string
 * @dest: value input
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
