#include "main.h"

/**
 * swap_int - function that swaps value of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 */
void swap_int(int *a, int *b)

{

int x = a;
int y = b;

*a = y;
*b = x;

}
