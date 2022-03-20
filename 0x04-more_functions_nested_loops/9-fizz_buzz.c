#include <stdio.h>

/**
* FizzBuzz - prints umbers 0-100
* main - entry point
*
* Description: Prints 1-100 but for mutliples of 3 "Fizz", multiples
* of 5 "Buzz" and for shared multiples of 3&5 "FizzBuzz"
*
* Return: 0 (success)
**/
int main(void)
{
	int num;
	char Fizz, Buzz, FizzBuzz;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
		printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		printf("Fizz ");
		
		else if ((num % 5) == 0)
		printf("Buzz ");
		
		else
		printf("%d ", num);
	}
	printf("\n");
	return(0);

}
