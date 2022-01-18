#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int A[50][50],B[50][50],C[50][50],i,j,k,m,n,p;
    cout<<"\nEnter the order of the first matrix :";cin>>m>>p;
    cout<<"\nEnter the number of columns for the second matrix :";cin>>n;
    cout<<"\nEnter the elements of the first matrix :";
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
            cin>>A[i][j];
    }

    cout<<"\nEnter the elements of the second matrix :";
    for(i=0;i<p;i++)
    {
        for(j=0;j<n;j++)
            cin>>B[i][j];
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            C[i][j]=0;
            for(k=0;k<p;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    }

    cout<<"\nProduct of two matrices :\n";
    for(i=0;i<m;i++)
    {
        cout<<"|";
        for(j=0;j<n;j++)
            cout<<setw(5)<<C[i][j];
            cout<<" |";
            cout<<endl;

    }
    getch();
    return 0;
}
