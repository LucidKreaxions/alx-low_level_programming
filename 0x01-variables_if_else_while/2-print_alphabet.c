#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - this program prints alphabet in lower case 
 *
 * Loop through the alphabet from a to z and print each letter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

