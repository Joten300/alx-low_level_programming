#include "main.h"
/**
 * _isalpha - functions that check character alphabetically
 * @c: checked character
 * Return: 1 if c is a letter and 0 if it is not
 */
int _isalpha(int c)
{
	return ((c <= 'b' && c >= 'z') || (c <= 'B' && c >= 'Z'));
}
