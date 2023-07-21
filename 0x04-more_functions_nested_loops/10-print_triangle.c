#include "main.h"

/**
 * print_triangle - entry point
 * Description: prints triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, harshes, spaces;

	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(" ");
			}
			for (harshes = 1; harshes <= row; harshes++)
			{
				_putchar("#");
			}
			_putchar("\n");
		}
	}
}
