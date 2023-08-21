#include "main.h"

/**
* rev_string - A function that reverses a string.
* @s: A string.
* Return: Nothing.
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	int c = *i;

	while (i > (c / 2))
	{
		char a = s[i];
		char b = s[j];
		i--;
		j++;
	}
	_putchar('\n');
}
