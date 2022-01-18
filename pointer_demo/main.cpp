#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int aval=50,*ptraval=&aval;
    cout<<"\nValue stored at ptraval = "<<ptraval;
    cout<<"\nValue stored at aval = "<<*ptraval;
    *ptraval+=25;
    cout<<"\nValue stored at aval = "<<*ptraval;
    getch();
    return 0;
}
