#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints he number f arguments passed into it.
 *
 * @argc: int.
 * @argv: list.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argc - 1);
	(void)argv;
	return (0);
}
