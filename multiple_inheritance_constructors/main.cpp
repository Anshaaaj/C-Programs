#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x)
    {
        cout<<"\nCreating an object of A!";
        a=x;
    }
    void show()
    {
        cout<<a<<endl;
    }
    ~A()
    {
        cout<<"\nObject of A is being destroyed!";
    }
};

class B
{
    float b;
public:
    B(float x)
    {
        cout<<"\nCreating an object of B!";
        b=x;
    }
    void show()
    {
        cout<<b<<endl;
    }
    ~B()
    {
        cout<<"\nObject of B is being destroyed!";
    }
};

class C:public B,public A
{
    char ch;
public:
    C(char x,int p,float q):A(p),B(q)
    {
        cout<<"\nCreating an object of C!";
        ch=x;
    }
    void show()
    {
        B::show();
        A::show();
        cout<<ch<<endl;
    }
    ~C()
    {
        cout<<"\nObject of C is being destroyed!";
    }
};

int main()
{

    C ob1('v',8,9.6);
    cout<<endl;
    ob1.show();
    return 0;
}
