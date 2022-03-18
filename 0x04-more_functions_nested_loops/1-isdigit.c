#include "main.h"
/**
 * _isdigit - checks for digit
 *
 * @c: input digit
 * Description: Checks for a digit between 0-9
 *
 * Return: returns 1 if is digit, 0 otherwise
 **/
int _isdigit(int c)
{
	int i, check;

	for (i = 0; i <= 9; i++)

	{
		if (c == i++)
			check = 1;
		else
			check = 0;
	}
	return (check);
}
