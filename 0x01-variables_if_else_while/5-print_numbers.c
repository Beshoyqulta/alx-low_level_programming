#include <stdio.h>

/**
 * main - print numbers from 1-9
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
