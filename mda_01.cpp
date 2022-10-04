#include<iostream>
using namespace std;
int main()
{

    int a,b,m,x;
    cout<<"Enter a :";
    cin>>a;

    cout<<"Enter b :";
    cin>>b;

    m=a*b;
    x=a+b;
    if(m%x==0)
    {
        cout<<"its devided";
    }
    else
    {
        cout<<"its not devided";
    }



}