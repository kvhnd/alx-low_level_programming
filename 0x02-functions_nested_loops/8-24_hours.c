#include "main.h"

/**
 * jack_bauer - prints hrs and mins
 * Description: Prints every minute in one day
 * Return: Nothing
 */
void jack_bauer(void)
{
	int HR, MN;

	for (HR = 0; HR < 24; HR++)
	{
		for (MN = 0; MN < 60; MN++)
		{
			_putchar((HR / 10) + '0');
			_putchar((HR % 10) + '0');
			_putchar(':');
			_putchar((MN / 10) + '0');
			_putchar((MN % 10) + '0');
			_putchar('\n');
		}
	}
}
