#include "main.h"
/**
 * main - the main programm starts here
 *
 * Return: should be zero on a succesfull completion
 */
int main(void)
{
	char *q = "_putchar";

	while (*q)
	{
	_putchar(*q);
	q++;
	}
	_putchar('\n');
	return (0);
}

