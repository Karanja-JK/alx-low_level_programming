# include <stdio.h>

/**
 *  _puts - prints a string
 *  @str: sttring input
 *  Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n);
}
