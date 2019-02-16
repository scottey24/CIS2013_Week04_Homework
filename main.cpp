;=#include <iostream>
#include <string>
using namespace std;

double getHatSize(double hght, double wght)
{
	double sizeOfHat,
	sizeOfHat = (wght/hght) * 2.9;
	return sizeOfHat
}
double getJacketSize (double hght, double wght, int age)
{
	double sizeOfJacket;
	int newAge;
	int tens;
	sizeOfJacket = hght * wght/288;
	if (age > 30)
{
newAge = age-30;
tens = newAge / 10;
sizeOfJacket = sizeOfJacket + (tens * (1.0 / 8.0 ));
} 
return sizeOfJacket;
}
double getWaiastSize( double hght, double wght, int age)
{
	double sizeOfWaiast;
	int newAge;
	int twos;
	sizeOfWaiast = wght / 5.7;
	if (age > 28)
	{
		newAge = age - 28;
		twos = newAge / 2;
		
		sizeOfWaiast = sizeOfWaiast + (twos * (1.0 / 10.0))
	}
	return sizeOfWaiast
}

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
		
		
	