#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
char charType;
long int longIntType;
long long int longLongInt;
printf("Size of a char: %d bytes\n", sizeof(charType));
printf("Size of a int: %d bytes\n", sizeof(intType));
printf("Size of a float: %d bytes\n", sizeof(floatType));
printf("Size of a long int: %ld bytes\n", sizeof(longIntType));
printf("Size of a long long int: %d bytes\n", sizeof(longLongInt));
return (0);
}
