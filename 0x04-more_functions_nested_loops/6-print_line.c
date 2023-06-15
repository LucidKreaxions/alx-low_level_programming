#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is the number of times the character _ should be printed
 *
 * Return: draw a line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}

	putchar('\n');
	}
}
