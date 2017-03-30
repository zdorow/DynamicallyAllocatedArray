// Chapter9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//Chapter 9 Assignment
#include <stdlib.h>
#include <iostream>
using namespace std;
void NewArray(int [], int);


int main()
{
	const int NUM_ARRAY = 5;
	int array[NUM_ARRAY] = { 1, 2, 3, 4, 5 };
	int *arrPtr;
	arrPtr = array;
	cout << "Here are the values in the first array:\n";
	for (int count = 0; count < NUM_ARRAY; count++)
	cout << array[count] << " " << endl;

	NewArray(array, NUM_ARRAY);

	cout << "Here are the values to show the first array was not changed:\n";
	for (int count = 0; count < NUM_ARRAY; count++)
		cout << array[count] << " " << endl;

	system("pause");
	return 0;

}

void NewArray(int arr[], int size)
{
	int *arrPtr = new int[size] {*(arr + 4), *(arr + 3), *(arr + 2), *(arr + 1), *arr};
	cout << "Here are the values in the second dynamically allocated array:\n";
	for (int count = 0; count < size; count++)
		cout << arrPtr[count] << " " << endl;
	delete arrPtr;
}
