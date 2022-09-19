#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int i;
	int c;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = i / 2
	for (c = 0; c < j; c++)
		_putchar(s[c]);

	_putchar('\n');
}

