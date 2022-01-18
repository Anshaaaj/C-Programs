/* INSERTION IN AN ARRAY OF VARIABLE SIZE */
#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    //int Arr[]={23,1,56,78,44,21,9,20,35,79},n=10,i,pos,item;
    int Arr[MAX],n,i,pos,item;

    cout<<"\nEnter the size of the array :";
    cin>>n;
    cout<<"\nEnter the array elements :\n";
    for(i=0;i<n;i++)
        cin>>Arr[i];

    cout<<"\nEnter the element to be inserted :";
    cin>>item;
    cout<<"\nEnter the position at which element is to be inserted :";
    cin>>pos;

    cout<<"\nArray elements before insertion :\n";
    for(i=0;i<n;i++)
        cout<<' '<<Arr[i];

    for(i=n;i>=pos;i--) // making room for new element
        Arr[i]=Arr[i-1];
    Arr[pos-1]=item;    // inserting item
    n++;    // increase the array size by 1
    cout<<"\nArray elements after insertion :\n";
    for(i=0;i<n;i++)
        cout<<' '<<Arr[i];

    return 0;
}
