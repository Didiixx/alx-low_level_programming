#include <stdio.h>

/**
 * main - Prints the lower case ine reverse.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}

putchar('\n');

return (0);
}
