#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: Prints lowercase alphabet in reverse
*
* Return: Always 0 (Success)
**/

int main(void)
{
	char lowc;

	for (lowc = 'z'; lowc >= 'a'; lowc--)
	{
		putchar(lowc);
	}

	putchar('\n');

	return (0);
}
