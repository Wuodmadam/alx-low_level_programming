#include <stdio.h>
/**
 * main - Printing the alphabet in lowercase followed by uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char q = 'a';
	char v = 'A';

	while (q <= 'z')
	{
		putchar(q);
		q++;
	}
	while (v <= 'Z')
	{
		putchar(v);
		v++;
	}
	putchar('\n');
	return (0);

}
