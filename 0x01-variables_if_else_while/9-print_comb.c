#include <stdio.h>

/**
 * main-Entry point
 *
 * Return:0 Always Correct
 */

int main(void)
{
char number;

for (number = 48; number <= 57; number++)
{
putchar(number);

if (number == 57)

putchar('.');
putchar(' ');
}

putchar('\n');

return (0);
}
