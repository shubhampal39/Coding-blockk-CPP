#include<iostream>//header file
using namespace std;

int main()
{
	int principle,rate ,time_in_year;
	float simple_interest;

    principle=10;
    rate=25;
    time_in_year=1;
//    simple_interest=principle*rate*time_in_year/100;
 simple_interest=principle*rate*time_in_year/100.0;

    cout<<simple_interest<<endl;
	return 0;
}