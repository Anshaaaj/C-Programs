#include <iostream>

using namespace std;

float &minimum(float &a,float &b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    float x,y;
    cout<<"\nEnter two values :";
    cin>>x>>y;
    cout<<"\nThe minimum of two numbers is :"<<minimum(x,y);
    return 0;
}
