#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include "main.h"

/**
 * main - Randomly generate pass
 * Decription: Program to randomly generates password.
 *
 * Return: nothing
 */

int main(void)

{

int pass, sum;

srand(time(NULL));

sum = 0;

while (sum <= 2645)
{
pass = (rand() % 128);

sum += pass;

printf("%c", pass);

}

printf("%c", 2772 - sum);

return (0);
}
