#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[50],n,i,j,temp;
    cout<<"\nEnter the array size :";cin>>n;
    cout<<"\nEnter the array elements :";
    for(i=0;i<n;i++)
        cin>>A[i];
    cout<<"\nUnsorted Array :- \n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];A[i]=A[j];A[j]=temp;
            }
        }
    }
    cout<<"\nSorted Array :- \n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';

    return 0;
}
