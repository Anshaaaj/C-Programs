#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[50],n,i,pos,item;
    cout<<"\nEnter the array size :";cin>>n;
    cout<<"\nEnter the array elements :";
    for(i=0;i<n;i++)
        cin>>A[i];
    cout<<"\nEnter the new item to be inserted and the position :";cin>>item>>pos;
    pos--;
    for(i=n-1;i>=pos;i--)
        A[i+1]=A[i];
    A[pos]=item;
    n++;
    cout<<"\nThe newly modified array is :\n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';
    getch();
    return 0;
}
