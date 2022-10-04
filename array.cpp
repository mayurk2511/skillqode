#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[5],b[5];
    for(i=0;i<=3;i++)
    {
    cout<<"Enter one value A :";
    cin>>a[i];
    cout<<"Enter one value B :";
    cin>>b[i];
    }
    cout<<"your array is :";
    for(i=0;i<=3;i++)
    {

        cout<<"\nA :"<<a[i];
       

    }
    for(i=0;i<=3;i++)
    {

        cout<<"\nB :"<<a[i];

    }


}