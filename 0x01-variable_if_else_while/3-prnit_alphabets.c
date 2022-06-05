#include <stdio>
/*
 * Main - Write a program that prints the alphabet in lowercase, 
 * and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{

char lowerAlpha = 'a';
char upperAlpha = 'A';
while(lowerAlpha <= 'z')
{
putchar(lowerAlpha);
lowerAlpha++;
}	
while(upperAlpha <= 'Z')
{
putchar(upperAlpha);
upperAlpha++;
}

putchar('\n');

return (0);

}
