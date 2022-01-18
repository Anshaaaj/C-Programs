#include <iostream>

using namespace std;

class Base
{
    int a; //4 bytes
public:
    float b; // 4 bytes
    void getdata()
    {
        cout<<"\nEnter the values of a and b :";
        cin>>a>>b;
    }

    void show()
    {
        cout<<"\n2 values are :"<<a<<" and "<<b;
    }
};

class Derived : private Base
{
    int x; // 4 bytes
public:
    char name[20]; // 20 bytes
    void getdata()
    {
        cout<<"\nEnter the values of x and name :";
        cin>>x>>name;
    }

    void show()
    {
        cout<<"\n2 values are :"<<x<<" and "<<name;
    }
};


int main()
{
    Base b1;
    Derived d1;
    cout<<"\nSize of Class Base = "<<sizeof(Base);
    cout<<"\nSize of Class Derived = "<<sizeof(Derived);
    cout<<"\nSize of an object of Class Base = "<<sizeof(b1);
    cout<<"\nSize of an object of Class Derived = "<<sizeof(d1);
    return 0;
}
