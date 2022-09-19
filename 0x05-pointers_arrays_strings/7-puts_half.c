#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int i;
	int c;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;

	j = i / 2;
	for (c = i; c > j; c--)
		_putchar(str[c]);

	_putchar('\n');
}

