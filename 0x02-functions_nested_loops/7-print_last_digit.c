#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)	
{
	int last_digit = n % 10;

	if (last_digit < 0)
	last_digit *= -1;

	_putchar(last_digit + '0');
	_putchar('\n');
	return (last_digit);
}
