#include <iostream>

using namespace std;

void swapValue(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x,y;
    cout<<"\nEnter the two values :";
    cin>>x>>y;
    cout<<"\nBefore Swapping : \nFirst = "<<x<<"\nSecond = "<<y;
    swapValue(&x,&y);
    cout<<"\nBefore Swapping : \nFirst = "<<x<<"\nSecond = "<<y;

    return 0;
}
