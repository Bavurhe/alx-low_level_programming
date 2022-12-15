#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character '\' should be printed
 * Return: diagonal line.
 */
void print_diagonal(int n)
{
	int ro;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 1; ro <= n, ro++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
