#include <iostream>
#include<stdio.h>
#include<stdlib.h>
const int LEN=25;

using namespace std;
class Employee
{
private:
    char name[LEN];
    unsigned long enumb;
public:
    void getdata()
    {
        cout<<"\nEnter name :";
        cin>>name;
        cout<<"\nEnter the employee number :";
        cin>>enumb;
    }
    void putdata()
    {
        cout<<"\nName : "<<name;
        cout<<"\nEmployee Number : "<<enumb;
        cout<<"\nBasic :"<<basic;

    }

protected:
    float basic;
    void getbasic()
    {
        cout<<"\nEnter Basic :";
        cin>>basic;
    }
};

class Manager : private Employee
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

    cout<<"\nSize of m1="<<sizeof(m1);
    Employee e;
    cout<<"\nSize of e="<<sizeof(e);
    cout<<"\nLong="<<sizeof(long);
    cout<<"\nfloat="<<sizeof(float);
    return 0;
}
