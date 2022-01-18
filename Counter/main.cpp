#include <iostream>

using namespace std;

class Counter
{
private:
static unsigned int count;

public:
    Counter()
    {
        count++;
    }
    static int getcount();
    int writecount()
    {
        return count;
    }
};

unsigned int Counter::count=0;

int Counter::getcount()
{
    return count;
}

int main()
{
    Counter c1,c2;
    cout<<endl<<"\nTotal objects = "<<Counter::getcount();
    Counter c3,c4,c5;
    cout<<endl<<"\nTotal objects = "<<Counter::getcount();
    cout<<"\n\nc1.writecount() =  "<<c1.writecount();
    cout<<"\nc2.writecount() =  "<<c2.writecount();
    cout<<"\nc3.writecount() =  "<<c3.writecount();
    cout<<"\nc4.writecount() =  "<<c4.writecount();
    cout<<"\nc5.writecount() =  "<<c5.writecount();
    return 0;
}
