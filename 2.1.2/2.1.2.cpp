#include <iostream>
#include <cmath>

using namespace std;

bool yearChecker(int num)
{
	return num >= 2018 && num <= 2022 ;
}


int main()
{
	int year;

	cout << "When did you start Highschool?: \n";
	cin >> year;
	cout << yearChecker(year);
}

// Create a function that checks if a number is between 2018 and 2022 inclusively (means including
//2018 and 2022).To verify when OAKS agent started highschool.Return 0 if it’s not in the range
//and 1 if it is.