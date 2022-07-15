#include "main.h"

/**
 * puts2 - function for printing other characters from first
 * @str: function for printing
 *
 */

void puts2(char *str)

{

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
