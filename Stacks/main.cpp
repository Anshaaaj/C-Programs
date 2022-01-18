#include <iostream>
#define MAX 10
using namespace std;

char STACK[MAX];        // Stack implemented as an array
int top=-1;                     // top is set to NULL

void push(char item)
{
    if(STACK[top]==MAX-1)
        cout<<"\nStack Overflow!";
    else
    {
        STACK[++top]=item;
    }
}

void Traverse()
{
    int i;
    cout<<"\n------------- STACK -------------\n";
    for(i=0;i<top;i++)
        cout<<'\t'<<STACK[i];
}

int main()
{

    char item,ans;
    do
    {
            cout<<"\nEnter the item to be pushed :";
            cin>>item;
            push(item);
            Traverse();
            cout<<"\nContinue ? (Y/N) :";
            cin>>ans;
    }
    while(ans=='y');

    return 0;
}
