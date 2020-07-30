/*
 * More fun with constants
 * /
 */

#include <iostream> 
using namespace std;

const int salary = 77000;
const double tax_rate = 0.0825;

int main () {
	//User id
	float user_id;
	double net_salary;

	cout << "Enter your ID" << endl;
	cin >> user_id;
	
	cout << user_id << " makes " << salary << endl;
	net_salary = salary * tax_rate;
	cout << net_salary << " after taxes" << endl;

	return 0;
}
	

