#include "main.h"

/**
* swap_int - Swaps values
* @a: pointer to int
* @b: pointer to int
*
* Description: Swaps the values of two integers
* Return: Nothing
**/
void swap_int(int *a, int *b)
{
	int original = *a;
	*a = *b;
	*b = original;
}
