#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: Prints alphabet iin lowercase except e%q
* Return: Always 0 (Success)
*/

int main(void)
{
	char lowc;

	char e = 'e';
	char q = 'q';

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
		if (lowc != e && lowc != q)
		{
			putchar(lowc);
		}
	}
	putchar('\n');

	return (0);
}
