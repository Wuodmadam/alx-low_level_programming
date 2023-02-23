#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar should appear only 3 times
 * Return: prints 0-14 ten (10) times
 */
void more_numbers(void)
{
	int q, lines;

	for (lines = 0; lines < 10; lines++)
	{
	for (q = 0; q <= 14; q++)
	{
	if( q >= 10)
	{
	_putchar((q / 10) + '0');
	}
	_putchar((q % 10) + '0');
	}
	_putchar('\n');
	}
}
