#include "main.h"
/**
 * _strcmp - string values comparison
 * @s1: value input
 * @s2: value input
 * Return: s1[w] - s2[w]
 */
int _strcmp(char *s1, char *s2)
{
	int b = 0;

	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
		b++;
	}
	return (0);
}
