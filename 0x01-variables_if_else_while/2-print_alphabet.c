#include <stdio.h>
/**
 * main - prints the alaphabet in lower case
 * Return: Always 0 (Successful)
 */
int main(void)
{
char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j''k', 'l', 'm'};
char b[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

for (int i = 0; i < 14; i++)
{
	putchar(a[i]);
}
for(int z = 0; z < 14; z++)
{
	putchar(b[z]);
}
}
