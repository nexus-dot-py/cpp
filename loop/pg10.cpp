#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number of rows";
	cin>>a;

	for(int i=0; i<=a; i++)
		{
			for(int j=0; j<=i; j++)
			{
				cout<<"*";
			}
			cout<<"\n";
		}
	
	return 0;

}										