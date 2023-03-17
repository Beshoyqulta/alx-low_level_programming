#include <stdio.h>
/**
 * main - print all combined
 * Return: Always 0 (Succesful)
*/
int main(void)
{
	int i;

	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
			break;
		i++

	}
	putchar('\n');
	return (0);
}
