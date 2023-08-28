#include "main.h"

/**
* _strspn - A function that gets the length of a prefix substring.
* @s: string to check
* @accept: string consist.
* Return: int.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int c = 0;

	if ((s == NULL) || (accept == NULL))
		return (c);

	while (*s && strchr(accept, *s++))
	{
		c++;
	}

	return (c);
}
