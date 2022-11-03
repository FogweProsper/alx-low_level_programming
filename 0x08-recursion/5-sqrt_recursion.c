#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the roots of a natrually inputted number
 * @num: The number to find the sqrt of
 * @root: The root to be tested
 *
 * Return: if the num has natural sqrt - square root
 * if does not have - -1
*/
int find_sqrt(int num, int root);
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
