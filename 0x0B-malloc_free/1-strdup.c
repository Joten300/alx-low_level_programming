#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - string copied given as a parameter
 * @str: duplicated string
 *
 * Return: copied string to a pointer (success), NULL (error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int a, len;

	a = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[a] = str[a]) != '\0')
		a++;

	return (duplicate);
}
