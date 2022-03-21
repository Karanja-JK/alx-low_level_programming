# include <stdio.h>

/**
 * puts2 - prints every character of
 * a string, starting with the first 
 * followed by a new line
 *
 * @str: array
 */

void puts2(char *str)
{
	int len = 0;
	int z;

	while (str[len] != 0)
	{
		len++;
	}
	for (z = 0; z < len; z++)
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
	}
	putchar('\n');
}
