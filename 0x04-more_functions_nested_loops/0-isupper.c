#include "main.h"
#include "0-main.c"
/**
 * _isupper - checks for uppercase
 * @c: character input
 * Description: Checks for upper case character
 *
 * Return: returns 1 if character is uppercase and 0 if otherwise
 *
 **/
int _isupper(int c)
{
	int i;
	int check = 0;

	for (i = 65; i <= 91; i++)
	{
		if (c == i)
			check = 1;

	}

	return (check);
}

