#include<iostream>
using namespace std;
template<class T>
void display(T t1)
{
    cout<<"displaying template :"<<t1<<endl;
}

template<class T1,class T2>
void display(T1 t1,T2 t2)
{
    cout<<"displaying template :"<<t1<<"\t"<<t2<<endl;
}

int main()
{
    display (200);
    display (12.40);
    display ('A');
    display ('A',1.25);
    display ('v',25);
    display (25,1.25);

    return 0;
}