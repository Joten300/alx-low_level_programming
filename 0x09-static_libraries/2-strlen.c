#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longc = 0;

	while (*s != '\0')
	{
		longc++;
		s++;
	}
	return (longc);
}
