// Erik Marquez
// eemxr9@mail.umkc.edu
// 4/18/19
// CS201L Lab 12



#pragma once




#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdexcept>
#include <math.h>

using namespace std;

//returns a factorial for any real number
long factorial_r( long value);

//Returns the fibinacci of a number
int fibonacci_r(long value);

//Returns true if a number prime false if not
bool is_prime_r(int value, int n );

//Sums all numbers in a list
int sum_r(int list[], int list_size = 4);

//returns the revesre of numbers in a list
void output_reverse_list_r(int list[], int list_size = 4);