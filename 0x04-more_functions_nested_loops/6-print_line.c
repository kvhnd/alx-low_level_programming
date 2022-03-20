#include "main.h"


/**
* print_line - prints line
* @n: input integer
* Description: Draws a straight line on the terminal
*
*Return: 0 success
*
**/
void print_line(int n)
{

	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i; i < n; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}

