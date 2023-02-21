#include "main.h"

/**
 * _abs - This function computes the absolute value of an integer
 * @n: number to be computer.
 *
 * Return: Absolute value of number or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
