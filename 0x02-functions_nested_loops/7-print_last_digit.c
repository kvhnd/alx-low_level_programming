#include "main.h"

/**
 * print_last_digit - prints alst digit
 * @d:  integer input
 *
 * Description: Prints the last digit of a number
 * Return: last digit of number d
 *
 **/
int print_last_digit(int d)
{
	int n;

	if (d < 0)
		n = -1 * (d % 10);
	else
		n = d % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
