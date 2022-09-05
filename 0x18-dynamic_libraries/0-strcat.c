#include "main.h"

/**
 * _strcat - oncatenates the string pointed to by @src,
 * including the terminating
 * * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_index = 0;
while (dest[index++])
dest_index++;
for (index = 0; src[index]; index++)
dest[dest_index++] = src[index];

return (dest);

}
