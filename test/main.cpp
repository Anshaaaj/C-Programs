#include <iostream>

using namespace std;

int main()
{
    int a[4][4]={1,2,3,4,
                                5,6,7,8,
                                9,1,2,3,
                                4,5,6,7},i,j,arr[50],k=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            arr[k++]=a[i][j];
    }

    for(i=0;i<16;i++)
    {
        cout<<arr[i]<<' ';
    }

    return 0;
}
