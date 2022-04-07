#include <stdio.h>

/**
 * pythagorean - calculates the square root of the
 * sum of the squares of two numbers a and b
 * @a: first number
 * @b: second number
 *
 * Return: result
 */

double pythagorean(double a, double b)
{
	double i, tolerance, tmp, larger_number, smaller_number, result;
	int divisor = 0;

	tmp = 0;
	tolerance = 0.0001;

	if (a > b)
	{
		larger_number = a;
		smaller_number = b;
	}
	else
	{
		larger_number = b;
		smaller_number = a;
	}

	for (i = larger_number; i >= larger_number && i <= a + b; i += 0.000001)
	{
		if (i * i > ((a * a + b * b) - tolerance) &&
		i * i < ((a * a + b * b) + tolerance))
		{
			divisor++;
			tmp += i;
			result = tmp / divisor;
		}
	}

	return (result);
}

/**
 * main - prints the result
 */

void main(void)
{
	double a, b;

	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("Enter the second number: ");
	scanf("%lf", &b);
	printf("%f\n", pythagorean(a, b));
}
