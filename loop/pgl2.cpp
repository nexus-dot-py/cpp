#include<iostream>
using namespace std;

int main()
	{
		int a,b;
		cout<<"no of iteration"<<endl;
		cin>>b;
		cout<<"no rows"<<endl;
		cin>>a;

		for(int t=0; t<=b; t++)
		{
			for(int i=0; i<=a; i++)   
			  {
	                        for(int j=0; j<=i; j++)
				  {
				    cout<<"*";								                          }
				cout<<"\n";
			  }
        		for(int i=0; i<=a; i++)
		          {
				for(int j=0; j<=a-i; j++)
				  {
				    cout<<"*";
				  }
				cout<<"\n";
			  }
		}
		return 0;
	}
