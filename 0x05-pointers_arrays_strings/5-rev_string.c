#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string for reversing
 *
 */

void rev_string(char *s)

{

int l = _strlen(s);
int i;
char *begin;
char *end;
char ch;

begin = s;
end = s;
for (i = 0; i < l - 1; i++)
{
end++;
}
for (i = 0; i < l / 2; i++)
{
ch = *end;
*end = *begin;
*begin = ch;
begin++;
end--;
}

}

