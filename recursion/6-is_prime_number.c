#include "main.h"

/**
 * check_prime - Recursively checks if a number is prime.
 * @n: The number to check.
 * @div: the divisor to test.
 *
 * Return: 1 if prime, 0 if not.
 */
int check_prime(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (check_prime(n, div - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n / 2));
}
