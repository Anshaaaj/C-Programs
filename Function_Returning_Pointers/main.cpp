#include <iostream>

using namespace std;
/*
int *big(int &x,int &y)
{
    if(x>y)
        return &x;
    else
        return &y;
}
*/
int *big(int *x,int *y)
{
    if(*x>*y)
        return x;
    else
        return y;
}

int main()
{
    int a,b;
    cout<<"\nEnter two numbers :";
    cin>>a>>b;
    //cout<<"\nThe greater number is :"<<*big(a,b);
    cout<<"\nThe greater number is :"<<*big(&a,&b);
    return 0;
}
