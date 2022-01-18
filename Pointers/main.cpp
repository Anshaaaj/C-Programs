#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int *val,r,c,i,j,*temp;
    cout<<"Enter dimensions :";
    cin>>r>>c;     // r=no.of rows, c=no.of cols
    val=new int[r*c];
    temp=val;
    for(i=0;i<r;i++)
    {
        cout<<"\nEnter elements for row "<<i+1<<" : ";
        for(j=0;j<c;j++)
        {
            cin>>*val++;
            //cin>>*(val+i*c+j);
        }
    }

   val=temp;
    cout<<"\nThe elements of the "<<r<<"x"<<c<<" matrix are :\n";
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {

            cout<<setw(5)<<*val++;
        }
        cout<<endl;
    }
    return 0;
}
