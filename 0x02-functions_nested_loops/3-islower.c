#include "main.h"
/**
 * _islower - lowercase
 * @c: character input
 * Description: checks for lowercase character
 *
 * Return: 1 if lowercase
 *
 **/
int _islower(int c)
{
	char i;
	int lowercase = 0;

	for (i = 'a'; i <= 'z'; i++)

	{
		if (i == c)
			lowercase = 1;
	}

	return (lowercase);
}
