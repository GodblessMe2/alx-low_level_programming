#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to dest.
 * @n: The numberof bytes from src
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_index = 0;
while (dest[index++])
dest_index++;
for (index = 0; src[index] && index < n; index++)
dest[dest_index++] = src[index];

return (dest);
}
