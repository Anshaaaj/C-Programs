#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int MAT[50][50],i,j,r,c;
    cout<<"\nEnter the order of the matrix :";cin>>r>>c;
    cout<<"\nEnter the elements of the matrix :";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>MAT[i][j];
    }

    cout<<"\nThe original matrix is :\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<setw(4)<<MAT[i][j];
            cout<<endl;
    }

    cout<<"\nThe transpose of the matrix is :\n";
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            cout<<setw(4)<<MAT[j][i];
            cout<<endl;
    }
    getch();
    return 0;
}
