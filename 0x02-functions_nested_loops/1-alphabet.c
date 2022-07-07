#include "main.h"

/**
 * main: - prints_alphabet, in lowercase, followed by a new line
 *
 * Return: Always (0)
 */

main(void)
{

char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');

return;
}
