#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: int parameter
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;
       
	last_digit = n % 10;
	return (last_digit);
}
