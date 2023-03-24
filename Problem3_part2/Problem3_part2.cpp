#include<iostream>

using namespace std;

int main()
{
	//WRITE A C++ PROGRAM TO PRINT NUMBER OF ZEROS OF A SERIES OF 10 NUMBERS ENTERED BY THE USER. using do while loop.

	int n, zeros = 0;

	cout << "Enter 10 numbers: " << endl;
	
	int i = 1;
	do
	{
		cin >> n;
	if (n == 0)
	{
		zeros++;
	}

	i++;

	} while (i <= 10);

	cout << "Number of zeros: " << zeros << endl;
}