#include <stdio.h>

/**
*main - main function
(*
*Description: This functoin will print numbers from 0 to 9
*Return: 0
*/
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
