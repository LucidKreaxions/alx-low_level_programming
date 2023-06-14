#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is the number of times the character _ should be printed
 *
 * Return: draw a  line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		putchar('_');
	}

	putchar('\n');
}
