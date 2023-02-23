#include "holberton.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (q = 1; q <= n; q++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
