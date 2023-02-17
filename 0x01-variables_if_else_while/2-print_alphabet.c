#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char q = 'a';

	while (q <= 'z')
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
