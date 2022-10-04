#include<iostream>
using namespace std;
class Book
{
    int bookno;
    string booktitle;
    float price,totalcost;
    public:
    void BookNo()
    {
        cout<<"Enter Book No :";
        cin>>bookno;
    }
    void BookTitle()
    {
        cout<<"Enter Book Title :";
        cin>>booktitl;
    }
    void BookPrice()
    {
        cout<<"Enter Book Price :";
        cin>>price;
    }
    void TotalCost()
    {
        totalcost=boox*price;
    }
    void FeedInfO()
    {
        cout<<"\nYour Flight No   : "<<flightno;
        cout<<"\nYour Destination :"<<destination;
        cout<<"\nYour distance is : "<<distance;
        cout<<"\nfuel cost        : "<<fuel;
    }


};
int main()
{
Flight flight1;
flight1.FlightNo();
flight1.EnterDestination();
flight1.EnterDistance();
flight1.CALFueL();
flight1.FeedInfO();
}