#include <iostream>
using namespace std;

int main() 
{	
	int a,c;
	
	cout<<"Enter a  number: a=";
	cin>>a;
	c=a%2;

	if(c==0){
		cout<<"\nIT IS A EVEN NUMBER"<<endl;
	}
	else{
		cout<<"\nIT IS A ODD NUMBER"<<endl;
	}

	 int n;
	cout << "Enter an integer: ";
	cin >> n;
    
	(n % 2 == 0) ? cout << n << " is even." :  cout << n << " is odd.";
   
	return 0;
}
