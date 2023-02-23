#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int q, r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (q = 1; q <= n; q++)
		{
			for (r = 1; r < q; r++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

