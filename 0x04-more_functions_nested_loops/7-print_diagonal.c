#include "main.h"


/**
* print_diagonal - draws diagonal
* @n: input integer
*
* Description: Draws a diagonal line  on the terminal
*
* Return: 0 (success)
**/
void print_diagonal(int n)
{
	int i; 
	int space;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)

				_putchar(' ');
				_putchar('\\');
			if (i == n - 1)
				continue;
			_putchar('\n');
		}

	}
	_putchar('\n');
}

