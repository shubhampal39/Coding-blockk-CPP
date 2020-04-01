#include<iostream>//header file
using namespace std;

int main()
{

	cout<<"if no divisible by 7 then it will come out of the loop"<<endl;

	int no;
	 while(true)
	 {
	 	cin>>no;
	 	if(no%7==0)
	 	{
	 		break;
	 	}
		
			cout<<"No"<<endl;

	 }
   

	cout<<"Come of the loop"<<endl;

	return 0;
}