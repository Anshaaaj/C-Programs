#include <iostream>
#include<conio.h>
using namespace std;
int DSUM(int M[][50],int row,int col)
{
    int i,j,sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j || (i+j)==col || (i+j)==col-1)
                sum+=M[i][j];
        }
    }
    return sum;
}
int main()
{
   // int MAT[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25},r,c;
    int MAT[50][50],r,c,i,j;
    do
    {
        cout<<"\nEnter the number of rows for the matrix :";
        cin>>r;
    }
    while(r%2==0);
    cout<<"\nEnter the number of cols for the matrix :";
    cin>>c;
    cout<<"\nEnter the matrix elements :\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>MAT[i][j];
        }
    }
    cout<<"\nThe sum of diagonal elements of the matrix are :"<<DSUM(MAT,r,c);
    getch();
    return 0;

}
