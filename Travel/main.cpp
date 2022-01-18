#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Travel
{
private:
    char T_Code[5];
    int No_of_Adults,No_of_Children,Distance;
    float TotalFare;

    void AssignFare()       // Mutator function
    {
        if(Distance>=1000)
            TotalFare=500;
        else if(Distance>=500)
            TotalFare=300;
        else
            TotalFare=200;

        TotalFare=(No_of_Adults*TotalFare)+(No_of_Children*TotalFare/2);
    }

public:

    Travel()            // Constructor      ( Manager function )
    {
        cout<<"\n\n\tObject created";
        strcpy(T_Code,"NULL");
        No_of_Adults=0;
        No_of_Children=0;
        Distance=0;
        TotalFare=0.0;
    }

        char  *getT_Code()      // Accessor functions
        {
            return T_Code;
        }

        int getNo_of_Adults()       // Accessor functions
        {
            return No_of_Adults;
        }

        int getNo_of_Children()     // Accessor functions
        {
            return No_of_Children;
        }

        int getDistance()       // Accessor functions
        {
            return Distance;
        }



    void EnterTravel();     // Mutator function
    void ShowTravel();      // Accessor function

        ~Travel(){          // Manager function (Destructor)
        cout<<"\n\n\tObject destroyed";
        }
};


void Travel::EnterTravel()
{
    cout<<"\nEnter the Travel Code :";cin>>T_Code;
    cout<<"\nEnter the No of adults :";cin>>No_of_Adults;
    cout<<"\nEnter the no of children :";cin>>No_of_Children;
    cout<<"\nEnter the Distance :";cin>>Distance;
    AssignFare();

}

void Travel::ShowTravel()
{
    cout<<"\n\n("<<T_Code<<" , "<<No_of_Adults<<" , "<<No_of_Children<<" , "<<Distance<<" , "<<TotalFare;
}

int main()
{
    Travel t1;
    t1.EnterTravel();
    t1.ShowTravel();

    cout<<"\nT_Code is :"<<t1.getT_Code();


}
