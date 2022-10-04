#include<iostream>
using namespace std;
class arith
{

    int a,b;
    public:
    void setval(int x ,int y)
    {
        a=x;
        b=y;

    }
    void getval()
    {
        cout<<"\n a :"<<a<<"\t b :"<<b;

    }

    void dosum()
    {

            cout<<"\n sum :"<<a+b;

    }
    void mult()
    {

            cout<<"\n mult :"<<a*b;
    }
};
int main()
{
    arith obj1;
    obj1.setval(10,20);
    obj1.getval();
    obj1.dosum();
    obj1.mult();

}