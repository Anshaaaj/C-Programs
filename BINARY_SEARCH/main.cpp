#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[50],n,i,j,element,beg=0,last,mid,temp;

    cout<<"\nEnter the array size :";cin>>n;last=n-1;
    cout<<"\nEnter the array elements :";
    for(i=0;i<n;i++)
        cin>>A[i];
    cout<<"\nEnter the search element :";cin>>element;
    cout<<"\nThe unsorted array is :\n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';
    /*Sorting the array */
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
cout<<"\nThe sorted array is :\n";
    for(i=0;i<n;i++)
        cout<<A[i]<<' ';
        /* Binary Search */
        while(beg<=last)
        {

            mid=(beg+last)/2;
            if(A[mid]==element)
            {
                cout<<"\n"<<element<<" is found at position :"<<mid+1;break;
            }
            else if(element<A[mid])
                last=mid-1;
            else if(element>A[mid])
                beg=mid+1;
        }
        if(beg>last)
            cout<<"\n"<<element<<" is not found in the list!";
        getch();
    return 0;
}
