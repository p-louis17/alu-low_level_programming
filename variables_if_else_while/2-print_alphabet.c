#include<stdio.h>
/**
 *  main - starting point for program execution
 * description - main will be used as function
 *  Return: 0 (success)
 */

int main(void)
{
	int i = 97;

	while (i < 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
