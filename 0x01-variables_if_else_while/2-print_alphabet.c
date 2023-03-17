#include <stdio.h>
/**
 * main - prints the alaphabet in lower case
 * Return: Always 0 (Successful)
 */
int main(void)
{
char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};

for (int i = 0; i < 27 ; i++)
{
	putchar(alpha[i]);
}
}
