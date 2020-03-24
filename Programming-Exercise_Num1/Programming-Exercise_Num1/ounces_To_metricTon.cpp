/*A metric ton is 35,273.92 ounces. Write a program that will read the weight of a package of breakfast cereal in ounces and
output the weight in metric tons as well as the number of boxes needed to yield one metric ton of cereal*/
#include <iostream> //allows to perform stardard input and output operations
using namespace std; //allows all elements in the std namespace to be accessed (without the std::prefix)

int main() { //Main function
	//variable declaration
	const double metricTon = 35273.92;
	double weight_ounces = 0;
	double weight_metricTons = 0;
	double numOfboxes = 0;
	//display user with question and read input
	cout << "Please enter the weight of the breakfast cereal in ounces: ";
	cin >> weight_ounces;
	//calculate
	weight_metricTons = weight_ounces / metricTon;
	cout << "The weight of the cereal in metric tons is: " << weight_metricTons;
	//calculate the number of boxes to yield one metric ton of cereal
	numOfboxes = metricTon / weight_ounces;
	cout << "\nThe number of boxes to yield one metric ton is: " << numOfboxes << endl;

	system("pause");
	return 0;
}
