#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number of the factorial to be found
 * Return: if n > 0, factorial of n or 1 if n<+0 or 1
*/

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
