#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: the multiplier
 */
void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n < 0 || n > 15)
	{
		return;
	}
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar('0' + product);
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + product / 100);
				_putchar('0' + (product / 10) % 10);
				_putchar('0' + product % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
