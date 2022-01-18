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
    /* bubble sort */

    for(i=0;i<n;i++) //number of passes
    {
        for(j=0;j<n-i;j++)  //each pass when bubble travels along the array
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

    cout<<"\nThe sorted array is :\n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';
    return 0;
}
