#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[50],n,i,element;
    cout<<"\nEnter the array size :";cin>>n;
    cout<<"\nEnter the array elements :";
    for(i=0;i<n;i++)
            cin>>A[i];
   cout<<"\nEnter the search element :";cin>>element;
   for(i=0;i<n;i++)
   {
       if(A[i]==element)
       {
           cout<<"\n"<<element<<" is found at position :"<<i+1;break;
       }
   }
   if(i==n)
    cout<<"\n"<<element<<" is not found in the array!";
   getch();
    return 0;
}
