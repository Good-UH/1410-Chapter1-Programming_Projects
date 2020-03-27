/*Workers at a particular company have won a 7.6% pay increase retroactive for six months. Write a program that takes an
employee’s previous annual salary as input and outputs the amount of retroactive pay due the employee, the new annual salary,
and the new monthly salary. Use a variable declaration with the modifier const to express the pay increase.*/
#include <iostream>
using namespace std;

int main() {
	const double PAY_INCREASE = 0.076;
	double prev_annualSal, six_monthlySal, retroactive_pay, new_annualSal, new_monthlySal;
	char cont;
	do {
		cout << "Please enter the previous annual salary:$";
		cin >> prev_annualSal;

		six_monthlySal = prev_annualSal * 0.5;
		retroactive_pay = six_monthlySal * PAY_INCREASE;
		new_annualSal = prev_annualSal * PAY_INCREASE + prev_annualSal;
		new_monthlySal = new_annualSal / 12;

		cout << "The amount of retroactive pay due for six months is:$" << retroactive_pay;
		cout << "\nThe new annual salary is :$" << new_annualSal;
		cout << "\nThe new monthly salary is :$" << new_monthlySal << endl;

		cout << "Would you like to continue (y/n)? ";
		cin >> cont;
	} while (cont == 'y');
	system("pause");
	return 0;
}