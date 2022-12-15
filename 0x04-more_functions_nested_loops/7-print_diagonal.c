#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character '\' should be printed
 * Return: diagonal line.
 */
void print_diagonal(int n)
{
	int ro, so;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 1; ro <= n, ro++)
		{
			for (so = 1; so < ro; so++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
