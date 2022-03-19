#include "main.h"
int _putchar(char c);

/**
 * print_numbers - prints numbers
 *
 * Description: Prints numbers between 0-9 followed by a newline
 *
 * Retrun: 0 (success)
 **/
void print_numbers(void)
{
	int i = '0';

	for (; i <= 9; i++)
		_putchar(i);

	_putchar('\n');
}







