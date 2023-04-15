#include <iostream>
using namespace std;
int main() {
	int a,b,rem,q;

	cout<<"ENTER TWO NUMBERS"<<endl;

        cout<<"THE DIVISOR:";
        cin>>a;

        cout<<"THE DIVIDENT:";
        cin>>b;

	rem=a%b;
	q=a/b;

        cout<<"THE QUOTIENT IS:"<<q<<endl;
	cout<<"THE REMAINDER IS:"<<rem<<endl;   
 return 0;
}
