#include <iostream>

using namespace std;

class Counter
{
private:
    static int count; // static data member
public:
    Counter()
    {
        count++;    // objects are counted
        cout<<"\nObject #"<<count<<" created";
    }
    static int getcount();  // static member function

    ~Counter()  // destructor
    {
        cout<<"\nObject destroyed!"<<count--;
    }
};

int Counter::count=0;

int Counter::getcount()
{
    return count;
}

int main()
{
    Counter c1,c2,c3;
    cout<<"\nNo. of objects created = "<<Counter::getcount();
    Counter c4,c5;
    cout<<"\nNo. of objects created = "<<Counter::getcount();
    return 0;
}
