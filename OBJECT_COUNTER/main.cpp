#include <iostream>
using namespace std;
class counter
{
private:
    int a;
    static int cnt;     //static data member
public:
    counter()       // constructor
    {
        cnt++;

    }

    static void showCount()
    {
        cout<<"\n"<<cnt<<"\n";
    }

    void show()
    {
        cout<<"\na="<<a;
    }

};

int counter::cnt=0;


int main()
{
    counter c1;
    counter c2;
    counter::showCount();
    c1.show();
    c2.show();
    counter c3;
    counter::showCount();
    c3.show();
    counter c4,c5;
    counter::showCount();
    c4.show();
    c5.show();
    return 0;
}
