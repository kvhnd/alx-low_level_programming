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
	char i;
	int check = 0;

	for (i = '0'; i <= '9'; i++)

	{
		if (i++ == c)
			check = 1;
			break;


	}
	return (check);
}
