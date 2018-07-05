#include<iostream>
using namespace std;

int arr[25] = {};

int main ()
{
	int c=0;
	int n=0;
	for( n=0; n<89 ; n++ )
	{
		if(n%2==0 && c<=25)
		{
		arr[c]=n;
		c++;
		}
	}
	cout << "The result is :" << arr;
	return 0;
}
