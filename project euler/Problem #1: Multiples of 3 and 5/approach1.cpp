#include <iostream>

using namespace std;

int main()
{
	int sum_of_all_multiples = 0;
	for(int natural_number = 0; natural_number < 1000; natural_number++)
	{
		if( natural_number % 3 == 0 || natural_number % 5 == 0 )
			sum_of_all_multiples += natural_number;
	}
	cout<<"Sum of all multiples is "<<sum_of_all_multiples<<"."<<endl;
	return 0;
}
