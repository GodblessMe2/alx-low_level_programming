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
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a int: %d byte(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %lli byte(s)\n", sizeof(longLongInt));
printf("Size of a float: %zu byte(s)\n\n", sizeof(floatType));
return (0);
}
