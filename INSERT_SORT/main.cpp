#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[50],i,j,n,temp;
    cout<<"\nEnter the array size :";cin>>n;
    cout<<"\nEnter the array elements :";
    for(i=0;i<n;i++)
        cin>>A[i];
    /* insertion sort */

    for(i=1;i<n;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(A[j]<A[j-1])
            {
                temp=A[j];A[j]=A[j-1];A[j-1]=temp;
            }

        }
    }

    cout<<"\nThe sorted array is :\n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';
    return 0;
}
