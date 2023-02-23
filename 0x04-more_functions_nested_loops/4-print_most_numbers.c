#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9) {
	if ((a != 4) && (a != 2))
	{
	putchar(a + '0');
	}
	a++;
	}
	return 0;
}
