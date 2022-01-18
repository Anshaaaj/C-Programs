#include <iostream>
#include<stdio.h>

const int LEN=25;

using namespace std;
class Employee  // base class
{
private:
    char name[LEN];     // name of employee
    unsigned long enumb;    // employee number (only positive values)
public:
    void getdata()  // read data members
    {
        cout<<"\nEnter name :";
        cin>>name;
        cout<<"\nEnter the employee number :";
        cin>>enumb;
    }
    void putdata()  // show data members
    {
        cout<<"\nName : "<<name;
        cout<<"\nEmployee Number : "<<enumb;
        cout<<"\nBasic :"<<basic;   // protected data member
    }

protected:
    float basic;    // basic salary
    void getbasic()     // to read basic salary
    {
        cout<<"\nEnter Basic :";
        cin>>basic;
    }
};      // base class ends here

class Manager : public Employee     //
{
private:
    char title[LEN];
public:
    void getdata()
    {
        Employee::getdata();
        getbasic();
        cout<<"\nEnter title :";
        cin>>title;
    }

    void putdata()
    {
        Employee::putdata();
        cout<<"\nTitle : "<<title;
    }
};
int main()
{
    Manager m1,m2;
    cout<<"\n\nManager 1 -->\n";
    m1.getdata();
    cout<<"\n\nManager 2 -->\n";
    m2.getdata();
    cout<<"\n\nManager 1 Details-->\n";
    m1.putdata();
    cout<<"\n\nManager 2 Details-->\n";
    m2.putdata();
    return 0;
}
