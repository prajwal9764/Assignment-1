#include<iostream>
using namespace std;
int main()
{
    int Q,D,Div,R;
    cout<<endl<<"Enter the Dividend: ";
    cin>>Div;
    cout<<endl<<"Enter the Divisor: ";
    cin>>D;
    Q=Div/D;
    R=Div%D;
    cout<<endl<<"Quotient :"<<Q;
    cout<<endl<<"Remainder :"<<R;
    return 0;
}