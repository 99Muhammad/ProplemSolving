

#include <iostream>
using namespace std;

short ReadYear()
{
	short NumbreOfYear = 0;
	cout << "Enter year ?";
	cin >> NumbreOfYear;
	return NumbreOfYear;
}

void CheckLeapYear(short NumberOfYear)
{
	if (NumberOfYear % 400 == 0)
	{
		cout << "Leap Year \n";
	}
	else if (NumberOfYear % 4 == 0 && NumberOfYear % 100 != 0)
	{
		cout << "Leap Year \n";
	}
	else {
		cout << "Not Leap Year !\n";
	}
}

int main()
{
	short NumberOfYear = ReadYear();
	CheckLeapYear(NumberOfYear);
}



