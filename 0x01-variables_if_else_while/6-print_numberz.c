#include <stdio.h>

/**
 * main-this is the main
 * a blank line
 * Description: a short description of function
 * Return: always zero
 */

int main(void)

{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar('\n');
	}
	return (0);
}
