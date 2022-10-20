#include "main.h"

/**
 * _strlen - find lenght of string
 * @s: string to check
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
