#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{	
	char arrange;

	for (arrange = 'a'; arrange <= 'z'; arrange++)
		_putchar(arrange);

	_putchar('\n');
}
