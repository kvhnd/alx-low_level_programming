#include <stdio.h>
/**
 * main - entry point 
 *
 * Description:Prints the size of various types on the computer
 * it is compiled on
 *
 * return: 0 Always(success)
 **/
int main(void)
{
	char c;
	int i;
	long l;
	short sh;
	float f;
	double d;

	printf("The size of char is %lx bytes\n", sizeof(c));
	printf("The size of int is %lx bytes\n",  sizeof(i));
	printf("The size of long is %lx bytes\n", sizeof(l));
	printf("The size of short is %lx bytes\n", sizeof(sh));
	printf("The size of float is %lx bytes\n", sizeof(f));
	printf("The size of double is %lx bytes\n", sizeof(d));

	return (0);
}
