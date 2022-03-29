#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: string
*
* Description: Prints every other character of a string starting with
* the very first character
*
* Return: nothing
**/
void puts2(char *str)
{
	int c = 0, len = 0;

	while
	(c >= 0)
	{
		if  (str[c] == '\0')
		break;
		c++;
	}
	for (; len < c; len += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
