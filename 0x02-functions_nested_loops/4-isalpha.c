#include "main.h"
/**
 * _isalpha - Checks for aphabetic character
 * @c: input character
 * Description: checls for alphabetic character
 *
 * Return: 1 for letter, lowercase or alphabet
 **/
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; upper <= 'z'; lower++)

	{
		for (upper = 'A'; upper <= 'Z'; upper++)

		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}
