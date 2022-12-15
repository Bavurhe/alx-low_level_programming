#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character '\' should be printed
 * Return: diagonal line.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n, i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
