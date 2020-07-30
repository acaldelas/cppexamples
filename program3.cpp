/*
 * Example 3 of program 2.3 
 */

#include <iostream> 
using namespace std;

int main()
{
	//Definitions of our numbers
	int num1;
	int num2;
	int sum;

	//Get input from user on nums
	cout << "Enter number" << endl;
	cin >> num1;
	cout << "You entered " << num1;
	cout << "Enter the next number " << endl;
	cin >> num2;
	cout << "Goint to add " << num1 << " and " << num2 << endl;
	sum = num1 + num2;
	cout << "Sum is " << sum << endl;

	return 0;
}

