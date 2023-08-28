#include "main.h"

/**
* _strchr - A function that locates a character in a string.
* @s: A string to locat characters.
* @c: A char to locat.
* Return: a pointer if found or NULL if not.
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];

			return (p);
		}
		else
		{
			i++;
		}
	}

	return (NULL);
}
