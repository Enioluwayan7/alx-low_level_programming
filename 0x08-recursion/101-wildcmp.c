#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: string 1
 * @s2: string 2 it can contain a * as a
 * special character
 * Return: 1 if are identical, 0 of not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		reutrn (1);
	if (*s1 == *s2)
		return ( wildcmp(s1 + 1, s2 + 1));
	if (*S2 == '*')
		return(wildcmp(s1, s2, + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
