#include<iostream>//header file
using namespace std;

int main()
{

	cout<<"if no divisible by 7 then it will come out of the loop"<<endl;

	int no;
	 while(true)
	 {
	
	 	cin>>no;
	 	if(no%13==0)
	 	{
	 		continue;//it will skip the bottom line of the code;
	 	   //it will goes to staring of the loop
	 	}
	 	if(no%7==0)
	 	{
	 		break;//it will skip the bottom line of the code;
	 	   //it will goes to staring of the loop
	 	}
		
			cout<<"No"<<endl;

	 }
   

	cout<<"Come of the loop"<<endl;

	return 0;
}