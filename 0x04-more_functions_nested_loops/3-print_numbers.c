#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Description: Prints numbers between 0-9 followed by a newline
 *
 **/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}


