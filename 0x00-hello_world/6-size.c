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
	long long int ll;
	float f;

	printf("Size of a char: %lx byte(s)\n", sizeof(c));
	printf("Size of a int:  %lx byte(s)\n",  sizeof(i));
	printf("Size of a long int: %lx byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lx byte(s)\n", sizeof(ll));
	printf("Size of a float: %lx byte(s)\n", sizeof(f));

	return (1);
}
