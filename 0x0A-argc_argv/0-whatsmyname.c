#include <stdio.h>
#include "main.h"
/**
 * main - prints program name
 * @argc: number of arguements
 * @argv: Array of arguement
 *
 * Return: Always 0 (Success)
 */

int main(int argc _attribute_((unused)), char *argv[])
{

	printf("%s/n", *argv);

	return (0);
}
