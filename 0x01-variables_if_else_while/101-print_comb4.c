#include <stdio.h>
/**
 * main - print combination of 3 numbers
(*
 * Return: 0 on success
 */
int main(void)
{
	int q = '0';
	int r = '0';
	int s = '0';

	while (q <= '7')
	{
		while (r <= '8')
		{
			while (s <= '9')
			{
				if (q < r && r < s)
				{
					putchar(q);
					putchar(r);
					putchar(s);
					if (!(q == '7' && r == '8' && s == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				s++;
			}
			s = '0';
			r++;
		}
		r = '0';
		q++;
	}
	putchar('\n');
	return (0);
}

