#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character '_' should be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= n; r++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
