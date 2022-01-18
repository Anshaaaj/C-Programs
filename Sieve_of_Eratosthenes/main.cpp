/* Sieve of Eratosthenes */
#include <iostream>
#include<iomanip>
#include<math.h>
#define MAX 100
using namespace std;

int main()
{
    int A[MAX],i,n,j;
    cout<<"\nEnter the number of elements :";cin>>n;

    for(i=0;i<n;i++)
        A[i]=i+1;
    A[0]=0;
    cout<<"\nThe numbers from 1 to "<<n<<" before sieving -->\n";
    for(i=0;i<n;i++)
    {

        /* Display */
        if(i%10==0)
            cout<<endl;
        cout<<setw(5)<<A[i];
    }

    for(i=2;i<floor(sqrt(n));i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[j]!=0 && A[j]>i)
            {
                if(A[j]%i==0)
                    A[j]=0;
            }
        }
    }

    cout<<"\n\nThe numbers from 1 to "<<n<<" after sieving  -->\n";
    for(i=0;i<n;i++)
    {

        /* Display */
        if(i%10==0)
            cout<<endl;
        if(A[i]==0)
            cout<<setw(5)<<'X';
        else
            cout<<setw(5)<<A[i];
    }
    return 0;
}
