#include <iostream>

using namespace std;
void see(char tm)
{
    if(tm=='D' or tm=='d')
        cout<<"\n Can see through Daylight!";
    else if(tm=='N' or tm=='n')
        cout<<"\n Cannot see through Darkness!";
}
int main()
{
    char choice;
    cout<<"\nSee through Daylight or Night? (D/N) :";
    cin>>choice;
    see(choice);
    return 0;
}
