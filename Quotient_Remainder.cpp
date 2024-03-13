#include<iostream>
using namespace std;
int main()
{
    int a,b,q,r;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    q=a/b;
    r=a-(b*q);
    cout<<"Quotient = "<<q<<endl<<"Remainder = "<<r;
}