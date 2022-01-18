/* DELETION FROM AN ARRAY OF VARIABLE SIZE */
#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    int Arr[MAX],n,i,pos,item;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    cout<<"\nEnter the array elements :\n";
    for(i=0;i<n;i++)
        cin>>Arr[i];
    cout<<"\nEnter the position from which the element is to be deleted :";
    cin>>pos;

    cout<<"\nArray elements before deletion :\n";
    for(i=0;i<n;i++)
        cout<<' '<<Arr[i];
    item=Arr[pos-1];    // saving the deleted item

    /* Left-shifting the elements to cover-up space */
    for(i=pos-1;i<n;i++)
        Arr[i]=Arr[i+1];
    /* Array size decreased by 1 */
    n--;
    cout<<"\nArray elements after deletion :\n";
    for(i=0;i<n;i++)
        cout<<' '<<Arr[i];

    return 0;
}
