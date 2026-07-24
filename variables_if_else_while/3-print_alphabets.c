#include<stdio.h>
/**
 *  main - starting point for program execution
 * description - main will be used as function
 *  Return: 0 (success)
 */

int main(void)
{
        int i = 97;
	int j = 65;

        while (i < 123)
        {
                putchar(i);
                i++;
        }
	while (j < 91)
        {
                putchar(j);
                j++;
        }
        putchar('\n');
        return (0);
}

