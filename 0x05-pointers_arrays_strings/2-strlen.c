#include "main.h"

/**
 * _strlen -  that returns the length of a string.
 * @s: input the lenght of the string
 *
 * Return: lenght
 */

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}
