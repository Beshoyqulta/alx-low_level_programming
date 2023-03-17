#include <stdio.h>
/**
 *main - print all the alphabets,
 *follwed by a line
 *Return: Always 0 (Successful)
 */
int main(void)
{
	char c;
	char c1;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c1 = 'A'; c1 <= 'Z' ; c1++)
	{
		putchar(c1);
	}
	putchar('\n');
	return (0);

}
