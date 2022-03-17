#include "main.h"
/**
 * _abs - value of integer
 * @r: integer from input
 * Description; computes absolute value of an interger
 *
 * Return: absolute value of r
 **/
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
