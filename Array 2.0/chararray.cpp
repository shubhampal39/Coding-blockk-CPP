#include<iostream>//header file
using namespace std;

int main()
{
//	char a[]={'a','b','c','d','e'};//may be leads to garbage value when we print a
	char a[]={'a','b','c','d','e','\0'};
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	char b[]="hello";
	cout<<sizeof(b)<<endl;

	char c[100];
	/*cin>>c;
	cout<<c<<endl;
	*/cin.getline(c,100);
	cout<<c;

	char paragrah[1000];
	cin.getline(paragrah,1000,'.');//stop when . come
	cout<<paragrah<<endl;


	return 0;
}