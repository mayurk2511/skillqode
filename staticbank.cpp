//refer to current object
#include <iostream>
#include <stdlib.h>
using namespace std;
class Bank
{
    int bal;
public:
    static int total_deposite_amt,total_withdraw_amt,total_trans;
    Bank(int bal)
    {
       total_deposite_amt+=bal; 
       this->bal = bal;   
    }
    int showbalance()
    {
        return bal;
    }
    int deposit(int deposit)
    {
        total_deposite_amt+=deposit;
        total_trans++;
        bal = bal + deposit;
        return bal;
    }
    int withdraw(int withdraw)
    {
        if (bal > withdraw)
        {
            total_trans++;
            total_withdraw_amt+=withdraw;
            bal = bal - withdraw;
            return bal;
        }
        else
        {
            cout << "\n Check your balance !!!!!";
            return 1;
        }
    }
};
int Bank ::total_deposite_amt=0;
int Bank ::total_withdraw_amt=0;
int Bank ::total_trans=0;

int main()
{
    system("CLS");
    int ch, dp = 0, wt;
    
        Bank a(100),b(200);
        a.deposit(50);
        b.deposit(50);
        b.withdraw(50);
        
        cout<<"\n Total deposite amt :"<<Bank::total_deposite_amt;
        cout<<"\n Total withdraw amt : "<<Bank::total_withdraw_amt;
        cout<<"\n Total no. of transaction  : "<<Bank::total_trans;        
        



        cout<<"\nbalance a : "<<a.showbalance();
        cout<<"\nbalance b : "<<b.showbalance();
        // do
        // {
        //     cout << "\n1. show your balance..\n"
        //          << "2. Deposit your balance....\n"
        //          << "3. Withdraw yoy balance.....\n"
        //          << "4. Exit...\n";
        //     cout << "Select number :: ";
        //     cin >> ch;
        //     switch (ch)
        //     {
        //     case 1:
        //         cout << "\n Your account balance : " << margesh.showbalance();
        //         break;

        //     case 2:
        //         cout << " \n Enter your Deposit : ";
        //         cin >> dp;
        //         cout << "\n Your deposit : " << dp;
        //         cout << "\n Your bank balance : " << margesh.deposit(dp);
        //         break;

        //     case 3:
        //         cout << "\n Enter your Withdraw : ";
        //         cin >> wt;
        //         cout << "\n Your withdraw : " << wt;
        //         cout << "\n Your bank balance : " << margesh.withdraw(wt);
        //         break;

        //     case 4:
        //         cout << "\n Thank For Visiting our Bank.........!";
        //         break;

        //     default:
        //         cout << "\n your choise is wrong......";
        //         break;
        //     }

        // } while (ch < 4);
    
}