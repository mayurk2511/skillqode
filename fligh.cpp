#include<iostream>
using namespace std;
class Flight
{
    int flightno;
    string destination;
    float distance,fuel;
    public:
    void FlightNo()
    {
        cout<<"Enter Flight No :";
        cin>>flightno;
    }
    void EnterDestination()
    {
        cout<<"Enter Destination :";
        cin>>destination;
    }
    void EnterDistance()
    {
        cout<<"Enter Distance :";
        cin>>distance;
    }
    void CALFueL()
    {
        if(distance<=1000)
        {
            fuel=500;
            //cout<<"Fuel : "<<fuel;        
        }
        else if(distance>1000 && distance<=2000)
        {
            fuel=1100;
            //cout<<"Fuel : "<<fuel; 
        }   
        else 
        {
            fuel=2200;
            //cout<<"Fuel : "<<fuel; 
        }
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