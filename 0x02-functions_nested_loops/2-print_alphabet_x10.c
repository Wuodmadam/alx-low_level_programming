#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lower case
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char letter;

	while (num++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
