#include <iostream>
using namespace std;
int main()
{
  int **arr=new int* [3];//create primary array in heap area
  for (int i = 0; i < 3; ++i) //create secondary array  	
  {
  	arr[i]=new int[4];
  }

 int counter=0;
 for (int i = 0; i < 3; ++i)
 {
 	for (int j= 0; j < 4; j++)
 	{
 		arr[i][j]=counter;
 		counter++;
 	}
 	/* code */
 }

 for (int i = 0; i < 3; i++)
 {
 	for (int j=0; j <4; j++)
 	{
      cout<<arr[i][j]<<" ";

 	}
 	cout<<"\n";
 }

  delete [] arr;
	return 0;
}
