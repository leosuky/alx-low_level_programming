#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i;
	int c;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; c < 5; c++)
		{
			if (s[i] == low_letters[c] || s[i] == upp_letters[c])
			{
				s[i] = numbers[c];
			}
		}
	}

	return (s);
}

