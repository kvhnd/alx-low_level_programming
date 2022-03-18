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
	char upperc = 'A';
	int check;

	for (; upperc <= 'Z'; upperc++)
	{
		if (c == upperc)
			check = 1;
		else
			check = 0;
	}

	return (check);
}
