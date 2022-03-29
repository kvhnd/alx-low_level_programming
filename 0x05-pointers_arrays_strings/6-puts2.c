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
	int c = 0, len = 0, temp;

	while
	(c >= 0)
	{
	if  (str[c] == '\0')
		break;
		c++;
		len++;
	}
	temp = len;

	for (; c % 2 == 0; c++)
	{
		_putchar(str[c]);
		if (c <= len)
		break;
	}
	_putchar('\n');
}
