#include <stdio.h>
/**
 * main - prints numbers 0-9.do no use char variables,printf and puts.
 * use only two instances of putchar
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
