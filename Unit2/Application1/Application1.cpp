#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double total, stateTax, countyTax;
	total = 95;
	stateTax = .04;
	countyTax = .02;
	double totalTax = (total * stateTax + total * countyTax);
	cout << "The total sales tax is " << totalTax << " dollars.\n";
	return 0;
}
