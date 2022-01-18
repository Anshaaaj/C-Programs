#include <iostream>
#include<conio.h>
using namespace std;
char STACK[50],top=-1; //global variables

void PUSH(char element,int num)
{
    if(top>=num-1) // if(top==num-1)
        cout<<"\nSTACK OVERFLOW!";
    else
        STACK[++top]=element;
}

char POP()
{
    char element;
    if(top<0)   // if(top==-1)
        cout<<"\nSTACK UNDERFLOW!";
    else
    {
        element=STACK[top--];
        return element;
    }
}

void TRAVERSE()
{
    int i;
    cout<<endl;
    if(top==-1)
    {
        cout<<"\nStack is empty!";
        return;
    }

    for(i=0;i<=top;i++)
        cout<<STACK[i]<<'\t';
}
int main()
{
    int n,choice; char item;
    cout<<"\nEnter the number of elements in a stack :";
    cin>>n;  //stack size
    do
    {

        cout<<"\n---------- STACKS (ARRAY REPRESENTATION) -------------";
        cout<<"\n<1> PUSH";
        cout<<"\n<2> POP";
        cout<<"\n<3> TRAVERSE";
        cout<<"\n<4> EXIT";
        cout<<"\nEnter your choice : (1-4) :";cin>>choice;

        switch(choice)
        {
        case 1: // push operation
            {
                cout<<"\nEnter an element to be inserted :";cin>>item;
                /* call function for push */
                PUSH(item,n);
                /* call function for traverse */
                TRAVERSE();
                getch();
                break;
            }
        case 2: // pop operation
            {
                /* call function to pop */
                item=POP();
                /* call function for traverse */
                cout<<"\nPopped element = "<<item<<endl;
                TRAVERSE();
                getch();
                break;
            }
        case 3: // traverse the stack
            {
                /* call function for traverse */
                TRAVERSE();
                getch();
                break;
            }
        case 4:   // exit
            return 0;
        }
    }
    while(1);  // end of do-while loop
}

