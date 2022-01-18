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
    cout<<"\nEnter the position, whose element is to be deleted:";cin>>pos;

    for(i=pos;i<n;i++)
        A[i-1]=A[i];

    n--;
    cout<<"\nThe newly modified array is :\n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';
    getch();
    return 0;
}
