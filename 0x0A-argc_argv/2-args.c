#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguements
 * @argc: count arguements
 * @argv: Arguement
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num = 0;

	if (argc > 0)
	{
		while (num < argc)
		{
			printf("%s\n", argv[num]);
			num++;
		}
	}
	return (0);
}
