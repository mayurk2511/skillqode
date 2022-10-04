#include<iostream>
using namespace std;
class Bank
{

    int Accbalance,deposit,withdraw;
    public:
    Bank()
    {
        Accbalance=1000;
        

    }
    
    
    Bank(int initbal)
    {
        Accbalance=(initbal+deposit-withdraw);

    }
    void showaccountbalance()
    {
        
        cout<<"\n Account balance :"<<Accbalance;


    }

};
int main()
{
    Bank perso1(1500),perso2(5000),perso3;
    perso1.deposit();
    perso2.deposit();
    perso3.deposit();
    perso1.withdraw();
    perso2.withdraw();
    perso3.withdraw();
    perso1.showaccountbalance();
    perso2.showaccountbalance();
    perso3.showaccountbalance();
}