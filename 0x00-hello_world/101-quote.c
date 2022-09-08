#include <stdio.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";

	fwrite(str,
	      2,
	      sizeof(str));
	return (1);
}

