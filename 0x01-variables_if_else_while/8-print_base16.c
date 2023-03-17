#include <stdio.h>

/**
 * main - print 16-base chars
 * Return: Always 0 (Succesful)
*/

int main(void)
{
	int i;
	char z;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (z = 'a'; z <= 'f' ; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
