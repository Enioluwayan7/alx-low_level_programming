#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: number of arguements
 * @argv: Array of arguement
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s/n", *argv);

	return (0);
}
