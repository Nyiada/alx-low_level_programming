#include <stdio.h>

/**
 * main- short description, single line
 * a blank line
 * Description:longer description of the function)?
 * Return: 0.
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
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
