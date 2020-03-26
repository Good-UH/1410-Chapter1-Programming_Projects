/*A government research lab has concluded that an artificial sweetener commonly used in a diet soda will cause death in laboratory mice.
A friend of yours desperate to lose weight but cannot give up soda. Your friend wants to know how much diet soda is it possible to drink
without dying as a result. Write a program to supply the answer. The input to the program is the amount of artificial sweetener needed to
kill a mouse, the weight of the mouse, and the weight of the dieter. To ensure the safety of your friend, be sure the program requests
the weight at which the dieter will stop dieting, rather than the dieter’s current weight. Assume that diet soda contains one-tenth of
1% artificial sweetener. Use a variable declaration with the modifier const to give a name to this fraction. You may want to express the
percentage as the double value 0.001.
*/
#include <iostream> //allows to perform stardard input and output operations
using namespace std; //allows all elements in the std namespace to be accessed (without the std::prefix)

int main() { //Main function
	//variable declaration
	const double DIETSODA_PERCENT = 0.001;
	const double SODA_WEIGHT = 12.0;
	double death_ofMouse, weight_ofMouse, goalWeight_ofDieter, bodyWeight_percentage, sodaPercent;
	int numOfsoda = 0;
	char cont;
	do {
		//display user with question and read input
		cout << "Please enter the amount of sweetener needed to kill a mouse: ";
		cin >> death_ofMouse;
		cout << "Please enter the weight of the mouse: ";
		cin >> weight_ofMouse;
		cout << "Please enter the weight of thr dieter in which they will stop dieting: ";
		cin >> goalWeight_ofDieter;
		//calculate
		bodyWeight_percentage = (death_ofMouse / weight_ofMouse);
		numOfsoda = (goalWeight_ofDieter * bodyWeight_percentage);
		sodaPercent = (DIETSODA_PERCENT * SODA_WEIGHT);
		cout << "The number of sodas possible to drink without dying are: " << (ceil(numOfsoda/sodaPercent)-1) << ", 12 oz. cans.";
		cout << "\nWould you like to continue (y/n)? ";
		cin >> cont;
	} while (cont == 'y');
	system("pause");
	return 0;
}