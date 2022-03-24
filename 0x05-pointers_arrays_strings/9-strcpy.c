# include <stdio.h>

/**
 * _strcpy - copies strings pointed to by
 * src including the terminating null byte
 * to the buffer pointed to by dest
 * @src: cadena a copiar
 * @dest: destino de la cadena
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}