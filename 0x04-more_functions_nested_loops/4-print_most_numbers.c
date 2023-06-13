#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 without printing 4 & 2
 *
 * Return: numbers from 0 - 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
