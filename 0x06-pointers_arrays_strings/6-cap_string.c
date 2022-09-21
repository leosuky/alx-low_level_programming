#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, c;
	int capitalize;
	char specials[] = ",;.!?(){}\n\t\" ";

	for (i = 0, capitalize = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			capitalize = 1;
		for (c = 0; specials[c] != '\0'; c++)
		{
			if (specials[c] == str[i])
				capitalize = 1;
		}

		if (capitalize)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				capitalize = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				capitalize = 0;
			else if (str[i] > 47 && str[i] < 58)
				capitalize = 0;
		}
	}
	return (str);
}

