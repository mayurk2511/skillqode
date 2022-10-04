#include<iostream>
using namespace std;
class School
{

    int rollno,maths,bio,social;
    float  per,total;
    char grade;
    public:
    void setdata()
    {

        cout<<"Enter roll : ";
        cin>>rollno;

       /*  cout<<"\nEnter student name : ";
        cin>>name; */

        cout<<"\nEnter maths  : ";
        cin>>maths;

        cout<<"\nEnter bio  : ";
        cin>>bio;

         cout<<"\nEnter social  : ";
        cin>>social;
    
    }
    
    void getval()
    {

        cout<<"maths:"
        <<"bio :"
        <<"social :";
      
        
    }
    void docal()
    {
        total=maths+bio+social;
        cout<<"\n Total : "<<total;
        per=total/3;
        cout<<"\n per :"<<per;
        if(per>85)
        {
            grade='A';

        }
        else if(per<65)
        {
            grade='B';

        }
        else 
        {
            grade='F';

        }
        cout<<"\nGrade :"<<grade;
 


    }



};
int main()
{

    School obj1;
    obj1.setdata();
    obj1.getval();
    obj1.docal();


}




