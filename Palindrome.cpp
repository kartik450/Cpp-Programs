#include<iostream>
using namespace std;
int main()
{
    int a,c=0;
    cout<<"Enter a number: ";
    cin>>a;
    int b=a;
    while(a!=0)
    {
        c=(c*10)+(a%10);
        a/=10;
    }
    if(b==c)
    {
        cout<<b<<" is a Palindrome number.";
    }
    else
    {
        cout<<b<<" is not a Palindrome number.";
    }
    return 0;
}