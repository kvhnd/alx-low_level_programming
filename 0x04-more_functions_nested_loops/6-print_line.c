#include "main.h"
#include "6-main.c"
#include "_putchar.c"
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

	while (i <= n)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
		_putchar('_');
		i++;
		}
		break;
	}
	_putchar('\n');
}

