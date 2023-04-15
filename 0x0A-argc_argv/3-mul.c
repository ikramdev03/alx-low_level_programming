#include <stdio.h>
#include "main.h"

/**
 * main - prints sum of 2 numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Erreur\n");
		return (1);
	}
	return (0);
}
