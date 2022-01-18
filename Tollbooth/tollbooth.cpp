#include <iostream>

using namespace std;

class tollbooth
{
private:
    static unsigned int totcars;
    static double totmoney;
public:
static void payingcar();
static void nopaycar();
static void display();
};

unsigned int tollbooth::totcars=0;
double tollbooth::totmoney=0.0;

void tollbooth::payingcar()
{
    totcars++;
    totmoney+=0.50;
}

void tollbooth::nopaycar()
{
    totcars++;
}

void tollbooth::display()
{
    cout<<"\nTotal cars = "<<totcars;
    cout<<"\nTotal money = "<<totmoney;
}

int main()
{
    int choice;
    do
    {
        cout<<"\n--------TOLLBOOTH---------";
        cout<<"\n<1> COUNT A PAYING CAR";
        cout<<"\n<2> COUNT A NON-PAYING CAR";
        cout<<"\n<3> DISPLAY";
        cout<<"\n<4> EXIT";
        cout<<"\n--------------------------";
        cout<<"\nEnter your choice :";
        cin>>choice;
        switch(choice)
        {
        case 1: // COUNT A PAYING CAR
            {
                tollbooth::payingcar();
                break;
            }
        case 2: // COUNT A NON-PAYING CAR
            {
                tollbooth::nopaycar();
                break;
            }
        case 3: // DISPLAY NO.OF CARS AND TOTAL MONEY COLLECTED
            {
                tollbooth::display();
                break;
            }
        case 4: // EXIT
            {
                return 0;
            }
        }   // end of switch
    }   // end of do-while
    while(1);
    return 0;
}
