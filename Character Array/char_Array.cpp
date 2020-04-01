#include <iostream>
using namespace std;
int main()
{
	//charcter ARRAY terminate must by a null character.
	int b[]={1,2,3};
	cout<<b<<endl;
	char a[]={'a','b' ,'c','d','e','\0'};
	/*char a[]={'a','b' ,'c','d','e'};*/
	cout<<a<<endl;
	char s[10];
	cin>>s;
	cout<<s<<endl;


	char s1[]={'h','e','l','l','o'};//create garbage
	char s2[]="hello";

	cout<<s1<<" "<<sizeof(s1)<<endl;
	cout<<s2<<" "<<sizeof(s2)<<endl;


	return 0;
}
