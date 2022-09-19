#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void puts_half(char *str)
{
	int i;
	int c;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;

	j = i / 2
	for (c = 0; c < j; c++)
		_putchar(str[c]);

	_putchar('\n');
}

