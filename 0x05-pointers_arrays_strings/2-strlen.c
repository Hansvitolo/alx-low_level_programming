#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to count
 *
 * Return: length of a script
 */

int _strlen(char *s)
{

int count = 0;
while (*s != '\0')
{
count++;
s++;
}

return (count);

}
