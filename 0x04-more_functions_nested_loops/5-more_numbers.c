#include "main.h"


/**
 * more_numbers - Prints multiples
 *
 * Description: Prints 10 times the numbers 0-14
 * Return: 0 success
 **/
void more_numbers(void)
{
	int count, i;

	for (count = 0; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');

		}

	_putchar('\n');
	}
}
