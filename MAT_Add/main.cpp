#include <iostream>
#include<iomanip>
#define MAX 100
using namespace std;

int main()
{
    int MAT1[MAX][MAX],MAT2[MAX][MAX],MAT3[MAX][MAX],i,j,r,c;
    cout<<"\nEnter the order of the 2 matrices :";
    cin>>r>>c;  // rows and columns for both matrices

    /* Entering the first matrix */
    cout<<"\nEnter the first matrix :\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>MAT1[i][j];
    }

    /* Entering the second matrix */
    cout<<"\nEnter the second matrix :\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>MAT2[i][j];
    }

    /* Adding the 2 matrices */

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            MAT3[i][j]=MAT1[i][j]+MAT2[i][j];
    }

    /* Displaying the sum */
    cout<<"\nSum :\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<setw(5)<<MAT3[i][j];
        cout<<endl;
    }
    return 0;
}
