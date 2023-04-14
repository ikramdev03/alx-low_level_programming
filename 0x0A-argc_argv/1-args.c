#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints he number f arguments passed into it.
 *
 * @args: this is arguments count.
 * @argv: this is arguments vector.
 * Return: Always 0 (Success)
 */

int main(int args, char *argv[])
{
	printf("%s\n", args - 1);
	(void)argv;
	return (0);
}
