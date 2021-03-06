# include <stdio.h>

/**
 * print_rev - prints string in reverse
 * followed by a new line
 * @str: in reverse
 */
void print_rev(char *str)
{
	int i = 0;
	int total_characters = 0;
	int c = 0;

	while (str[i] != 0)
	{
		i++;
	}
	total_characters = i - 1;

	for (c = 0; c <= total_characters; c++)
	{
		putchar(str[total_characters - c]);
	}
	putchar('\n');
}
