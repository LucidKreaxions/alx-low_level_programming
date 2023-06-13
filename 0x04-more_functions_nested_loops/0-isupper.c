#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks whether a letter is uppercase
 *
 * @c: the number being checked
 *
 * Return: 1 for upper letter, otherwise a 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
