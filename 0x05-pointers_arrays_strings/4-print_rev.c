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
	for (; *s != '\0'; s--)
	{
	_putchar(*s);
	}
	_putchar('\n');
}
