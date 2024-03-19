#include<iostream>
using namespace std;
int main()
{
    float a,i;
    cout<<"Enter a number: ";
    cin>>a;
    for(i=1;i<=10;i++)
    {
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}