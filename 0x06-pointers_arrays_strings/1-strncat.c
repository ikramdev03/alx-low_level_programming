#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @n: input value
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	/* Find the end of dest string */
	}
	/* Concatenate src to dest until n characters or end of src is reached */
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	/* Terminate the resulting string with a null character */
	dest[i] = '\0';
	return (dest);
}
