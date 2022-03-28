#include "main.h"
/**
* _puts - Prints a string
* @str: string
*
* Description: Prints a string followed by a newline to stdout
*
* Return: nothing
**/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
