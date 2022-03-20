#include "main.h"


/**
* print_square - print square
* @size: size of square
*
* Description: Prints square followed by a newline
* Return: 0 (success)
**/
void print_square(int size)
{
	int l, w;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)

				_putchar('#');
				_putchar('\n');
			if (l == size - 1)
			continue;
		}
	}
	_putchar('\n');
}
