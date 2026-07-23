#include<stdio.h>

/**
 *  main - starting point for program execution
 * description - main will be used as function
 *  Return: 0 (success)
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (1);
}
