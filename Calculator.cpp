#include<iostream>
using namespace std;
int main()
{
    char op;
    double num1,num2;

    cout<<endl<<"Enter the operator( +, -, *, /, ) : ";
    cin>>op;

    cout<<endl<<" Enter two numbers one by one : " ;
    cin>>num1>>num2;
    
    switch( op ){
        case '+' :
        cout<<num1<< " + " <<num2<< " = "<<(num1 + num2);
        break;

        case '-' :
        cout<<num1<< " - " <<num2<< " = "<<(num1 - num2);
        break;

        case '*' :
        cout<<num1<< " * " <<num2<< " = "<<(num1 * num2);
        break;

        case '/' :
        if (num2 != 0.0)
        cout<<num1<< " / "<<num2<<" = "<<(num1 / num2);
        else
        cout<< "Divide by zero situation";
        break;

    }

}