#include <stdio.h>

/**
 * main - Short description, single line
 * a blank line
 * Description: Longer description of the function)?
 * Return: Description of the returned value
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
