#include "main.h"

/**
* _strcmp - a function that compares two strings.
* @s1: first string
* @s2: second stirng
* Return: 0 if same, negative if first is less and positive
* if first is greater.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	return (i - j);
}
