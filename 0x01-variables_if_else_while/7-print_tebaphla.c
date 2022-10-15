#include <stdio.h>

/**
 * main - Prints the lowercase alohabet in reverse order
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
