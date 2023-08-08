#include "main.h"

/**
 * _isupper - uppercase letters to be checked
 * @c: check char
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);

	return (0);
}
