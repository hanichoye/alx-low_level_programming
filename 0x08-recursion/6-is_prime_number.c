#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number -  function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: is number
 * Return: integer
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check prime number
 * @n: number
 * @i: iterator
 * Returns: a 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
