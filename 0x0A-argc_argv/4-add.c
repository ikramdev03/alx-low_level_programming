#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			int b;
			char *str;

			str = argv[i];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);

				}
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
