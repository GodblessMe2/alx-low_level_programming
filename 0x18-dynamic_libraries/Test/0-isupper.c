#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: is uppercase.
 *
 * Return: 1 if the character is uppercase or 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
