#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (_math(n, 2));
}

/**
 * _math - function that do the math for is_prime_number
 * @n: Number
 * @i: do the evaluation of the number
 * Return: 1 for prime, 0 if not prime
**/

int _math(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0 || n < 2)
		return (0);
	return (_math(n, i + 1));
}

