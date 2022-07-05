#include <stdio.h>

#include "main.h"

/**
 ** main - prints _putchar.
 *
 ** Description: write a program that prints "_putchar" followed by a new line.
 *
 ** Return: Always 0 (Success.)
 *
 **/

int main(void)
{
	char message[] = "_putchar";

	for (int count = 0; count < sizeof(message); count++)
	{
		putchar(message[count]);
	}
	putchar('\n');
	return (0);
}
