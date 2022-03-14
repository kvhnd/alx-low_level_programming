#include <stdio.h>
/**
 * main - entry point
 *
 * Description:Prints the size of various types on the computer
 * it is compiled on
 *
 * Return: 0 Always(success)
 **/
int main(void)
{
	char c;
	int i;
	long int l;
	long long ll;
	float f;

	printf("The size of a char: %lx byte(s)\n", sizeof(c));
	printf("The size of a int:  %lx byte(s)\n",  sizeof(i));
	printf("The size of a long int: %lx byte(s)\n", sizeof(l));
	printf("The size of a long long: %lx byte(s)\n", sizeof(ll));
	printf("The size of a float: %lx byte(s)\n", sizeof(f));

	return (0);
}
