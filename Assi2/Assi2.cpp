#include <iostream>
using namespace std;

int main()
{
	int total_sales = 95000; 
	const double state_tax_rate = 0.04; //we divide 4 by 100
	const double country_tax_rate = 0.02;

	double state_tax = total_sales * state_tax_rate;
	double country_tax = total_sales * country_tax_rate;
	double total_tax = state_tax + country_tax;

	cout << "Total sales: " << total_sales << endl;
	cout << "State Tax: " << state_tax << endl;
	cout << "Country Tax: " << country_tax << endl;
	cout << "Total Tax : " << total_tax << endl;

	return 0;

}

