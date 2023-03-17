#include <stdio.h>
/**
 * main - print all combined
 * Return: Always 0 (Succesful)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
