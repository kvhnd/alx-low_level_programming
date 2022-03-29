#include "main.h"
/**
* rev_string - Reverses string
* @s: string
*
* Return: nothing
**/
void rev_string(char *s)
{
	int c, x, r;
	char *str, temp;

	while
	(c >= 0)
	{
		if (s[c] == '\0')
		break;
		c++;
	}
	str = s;

	for (x = 0; x < (c - 1); c++)
	{
		for (r = x + 1; r > 0; r--)
		{
		temp = *(str + r);
		*(str + r) = *(str + (r - 1));
		*(str + (r - 1)) = temp;
		}
	}
}
