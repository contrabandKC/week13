// Erik Marquez
// eemxr9@mail.umkc.edu
// 4/18/19
// CS201L Lab 12

#include "Recursion Function.h"

long factorial_r( long value)
{
	int factResult;
	//base case
	if (value <= 1) {
		factResult = 1;
		return factResult;
	}

	else {
		factResult = value * factorial_r(value - 1);
		return factResult;
	}

	
}

int fibonacci_r(long value)
{
	//base case 1
	if (value <= 0)
		return 0;
	//base case 2
	else if (value == 1)
		return 1;

	//recursive call
	else
		return fibonacci_r(value - 1) + fibonacci_r(value - 2);


}

bool is_prime_r(int value, int n)
{
	//base case 1
	if (n > sqrt(value))
	{
		return true;
	}

	//base case 2
	else if (value % n == 0)
	{
		return false;
	}
	//recursive call

	else
	{
		return is_prime_r(value, n+1);
	}

	
}

int sum_r(int list[], int list_size)
{
	//base case
	if (list_size == 0)
	{
		return list[0];
	}

	//recursive call

	else if (list_size > 0)
	{
		return list[list_size] + sum_r(list, list_size - 1);
	}
	
}

void output_reverse_list_r(int list[], int list_size)
{
	//base case
	if (list_size == 0)
	{
		cout << list[0] << " ";
	}

	//recursive call

	else if (list_size > 0)
	{
		cout << list[list_size] << " ";
		output_reverse_list_r(list, list_size - 1);
	}
}
