#include <iostream>
#include<conio.h>
using namespace std;
char QUEUE[50];
int frnt=-1,rear=-1;  // global variables

void INSERTION(char element,int num)
{
    if(rear>=num-1)   // if(rear==num-1)
        cout<<"\nQUEUE IS FULL!";
    else if(frnt==-1 && rear==-1)
    {
        QUEUE[++rear]=element;frnt++;
    }
    else
        QUEUE[++rear]=element;
}

char DELETION(int num)
{
    char element;
    if(frnt>=num || frnt==-1)
        cout<<"\nQUEUE IS EMPTY!";
    else if(frnt==0 && rear==0)
    {
        element=QUEUE[frnt];frnt=-1;rear=-1;
    }
    else
    {
        element=QUEUE[frnt++];
    }
    return element;
}

void TRAVERSE(int num)
{
    int i;
    cout<<endl;
     if(frnt>=num || frnt==-1)
        cout<<"\nQUEUE IS EMPTY!";
     else
     {
        for(i=frnt;i<=rear;i++)
            cout<<QUEUE[i]<<'\t';
     }

}
int main()
{
    int n,choice; char item;
    cout<<"\nEnter the number of elements in the queue :";
    cin>>n;
    do
    {

        cout<<"\n---------- LINEAR QUEUE (ARRAY REPRESENTATION) -------------";
        cout<<"\n<1> INSERTION";
        cout<<"\n<2> DELETION";
        cout<<"\n<3> TRAVERSE";
        cout<<"\n<4> EXIT";
        cout<<"\nEnter your choice : (1-4) :";cin>>choice;

        switch(choice)
        {
        case 1: // insertion
            {
                cout<<"\nEnter an element to be inserted :";cin>>item;
                /* call function for push */
                INSERTION(item,n);
                /* call function for traverse */
                TRAVERSE(n);
                getch();
                break;
            }
        case 2:
            {
                /* call function to pop */
                item=DELETION(n);
                cout<<"\nItem deleted is =>"<<item;
                /* call function for traverse */
                TRAVERSE(n);
                getch();
                break;
            }
        case 3:
            {
                /* call function for traverse */
                TRAVERSE(n);
                getch();
                break;
            }
        case 4:
            return 0;
        }
    }
    while(1);

}

