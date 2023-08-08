#include "main.h"
/**
 * _strchr - entry point
 * @s: value input
 * @c: value input
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}

