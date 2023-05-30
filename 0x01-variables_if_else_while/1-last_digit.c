#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Program that will assign a random number to the variable n
 * each time it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (n > 5)
		printf("Last digit is %i is %i and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %i is %i and is 0\n", n);
else if (n < 6 && n != 0)
printf("Lastdigitof %i is %i and is less than 6 and
				is not 0\n", n);
	return (0);
}
