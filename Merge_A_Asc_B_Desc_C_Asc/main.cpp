/* To merge two arrays - A in ascending order, B in descending order,
C should be in ascending order */
#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    int A[]={25,26,31,44,49,82,92},B[]={110,92,90,78,56,55,44,37,35,23},C[MAX],n1=7,n2=10,i=0,j=n2-1,k=0;
    /*
    cout<<"\nEnter the size of first array :";cin>>n1;
    cout<<"\nEnter the size of second array :";cin>>n2;

    cout<<"\nEnter the elements of first array :";
    for(i=0;i<n1;i++)
        cin>>A[i];

    cout<<"\nEnter the elements of second array :";
    for(j=0;j<n2;j++)
        cin>>B[j];
    */
    while(i<n1 && j>=0)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];i++;
        }
        else if(B[j]<A[i])
        {
            C[k]=B[j];j--;
        }
        else if(A[i]==B[j])
        {
            C[k]=A[i];i++;j--;
        }

        k++;
    }

    while(i<n1)
    {
        C[k]=A[i];
        k++;i++;
    }

    while(j>=0)
    {
        C[k]=B[j];
        k++;j--;
    }
    C[k]='\0';
    cout<<"\nArray A --> :";
    for(i=0;i<n1;i++)
        cout<<' '<<A[i];

    cout<<"\nArray B --> :";
    for(i=0;i<n2;i++)
        cout<<' '<<B[i];

    cout<<"\nArray C --> :";
    for(i=0;C[i]!='\0';i++)
        cout<<' '<<C[i];
    return 0;
}
