#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: The number for calculating the factorial
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n <= 1)
	return (1);
	return (n * factorial(n - 1));
}
