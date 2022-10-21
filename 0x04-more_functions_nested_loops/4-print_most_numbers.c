#include "main.h"
/**
*print_most_numbers - check the code
*
*Return: Always 0.
*/

void print_most_numbers(void)
{
int ch;

for (ch = '0'; ch <= '9'; ch++)
{
if (ch ==  '2' || ch == '4')
{
continue;
}
_putchar(ch);
}
_putchar('\n');
}
