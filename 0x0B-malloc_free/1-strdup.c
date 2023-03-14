#include <stdlib.h>
/**
 * _strdup - Function returns a pointer to a new string which is a duplicate of the string 
 * @str: string  to dupliacte
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);
	while ((string[i] = str[i]) != '\0')
		i++;

	return (string);
}

