#include "main.h"

/**
 * _puts - function that prints a string ti stdout
 * @s: printed string
 * _putchar prints a new line
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
