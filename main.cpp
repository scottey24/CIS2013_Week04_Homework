;=#include <iostream>
#include <string>
using namespace std;

double getHatSize(double, double);
double getJacketSize(double, double, int);
double getWaiastSize(double, double, int);

int main ()
{
	
	double userHeight;
	double userWeight;
	int userAge;
	char userChoice;
	double hatSize;
	double jacketSize;
	double waist;
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	do
	{
		cout << "Enter the height in inches:";
		cin >> userHeight;
		cout << "Enter the weight in pounds:";
		cin >> userWeight;
		cout << "Enter your age:";
		cin >> userAge;
		
		hatSize = getHatSize(userHeight, userWeight);
		jacketSize = getJacketSize(userHeight, userWeight, userAge);
		waist = getWaiastSize(userHeight, userWeight, userAge);
		
		cout<< "\nThe size of the hat in inches:"
		<< hatSize << endl;
		
		cout << " The size of the jacket in inches:"
		<< jacketSize << endl;
		
		cout << " The size of the waist in inches:"
		<< waist << endl;
		
		cout << "Repeat these calculations? (Y/N):";
		cin >> userChoice;
		cout << endl;
	}while(userChoice == 'Y' || userChoice == 'y');
	
	return 0;
}
		
		
	