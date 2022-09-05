#include "main.h"

/**
 * _isdigit - checks for lowercase character.
 * @c: If is a digit..
 *
 * Return: 1 it is digit else 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
