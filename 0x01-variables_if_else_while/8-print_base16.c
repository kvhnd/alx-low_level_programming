#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints all numbers of base 16 in lowercase followed by
* a newline
* Return: Always 0 (Success)
**/

int main(void)
{
	int d;
	char lowc;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (lowc = 'a'; lowc <= 'f'; lowc++)
	{
		putchar(lowc);
	}
	putchar('\n');

	return (0);
}
