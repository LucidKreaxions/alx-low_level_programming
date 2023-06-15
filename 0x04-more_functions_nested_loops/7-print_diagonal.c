#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: the number of times the backslash character should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
