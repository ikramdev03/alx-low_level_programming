#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: char copy to
 * @src: char copy from
 * Return: char pointer to dest
 */
char *_strcat(char *dest, char *src);
{
	int i;
	int j;
for (i = 0; dest[i] != '\0'; i++)
for (j = 0; src[i] != '\0'; j++)
{
dest[i] = src[i];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
