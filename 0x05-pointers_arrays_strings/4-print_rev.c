#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: string to be printed
 *
 */

void print_rev(char *s)

{

int count = 0;
while (*s != '\0')
{
count++;
s++;
}

while (count > 0)
{
s--;
_putchar(*s);
count--;
}

_putchar('\n');

}
