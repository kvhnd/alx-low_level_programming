#include "main.h"
/**
* print_rev - prints string in reverse
* @s: string
*
* Description: Prints string in reverse followed by a newline
* Return: nothing
**/
void print_rev(char *s)
{
	int c = 0;

	while
	(s[c] != '\0');
	c++;

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
