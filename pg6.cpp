#include <iostream>
using namespace std;

int main()
{    
    int a,b,temp;

    cout << "Enter first number: a=";
    cin >>a;

    cout << "Enter second number: b=";
    cin >>b;

    cout<<"After Swaping"<<endl;

    temp=b;
    b=a;
    a=temp;

    cout<<"\na="<<a<< endl;
    cout<<"b="<<b<<endl;

	//THE SECOND METHOD;

    cout << "\nEnter first number: a=";
    cin >>a;

    cout << "Enter second number: b=";
    cin >>b;

    cout << "\nBefore swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // using multiplication and division for swapping
    
    cout << "\nEnter first number: a=";
    cin >>a;

    cout << "Enter second number: b=";
    cin >>b; 

    a = a * b;    // a = 50
    b = a / b;    // b = 5
    a = a / b;    // a = 10

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
