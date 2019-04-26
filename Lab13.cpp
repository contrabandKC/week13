
// Erik Marquez
// eemxr9@mail.umkc.edu
// 4/18/19
// CS201L Lab 12


#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdexcept>
#include "Recursion Function.h"

using namespace std;

int main() {
	
	//Variable declarations
	int fact = 0;
	int num2 = 0;
	int arr[5];
	int temp =0;

	// Factorial output
	cout << "Enter and integer" << endl;

	cin >> fact;

	cout << endl;

	cout << fact <<"! = " << factorial_r(fact) << endl << endl;

	//Fibinacci output

	cout << "fibinacci(" << fact << ") = " << fibonacci_r(fact)<< endl << endl;


	//Prime output
	cout << "Enter a number to check if it a prime number" << endl;

	cin >> num2;

	if (is_prime_r(num2, 2))
	{
		cout << num2 << " is a prime number" << endl<< endl;
	}
	else
	{
		cout << num2 << " is NOT a prime number" << endl << endl;
	}


	//Arary output
	cout << "Next we will enter 5 values into an array" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "enter value for index " << i << endl;

		cin >> temp;

		arr[i] = temp;

	}

	cout << "The sum of all values is " << sum_r(arr) << endl;

	//reverse output
	cout << "The list output in reverse is  " << endl;
	output_reverse_list_r(arr);


	return 0;
}