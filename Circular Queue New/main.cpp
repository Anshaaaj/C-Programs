#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define MAX 10

int i,f=-1,r=-1;        // global variables
char QUEUE[MAX],item;

void insertion(char item)
{
    if((f==0 && r==MAX-1) || (f==r+1))
        cout<<"\nQueue is full!";
    else if(f==-1 && r==-1)
    {
        QUEUE[++r]=item;
        f++;
    }
    else if(f>0 && r==MAX-1)
    {
        r=0;
        QUEUE[r]=item;
    }
    else
        QUEUE[++r]=item;
}

char delItem()
{

    if((f==-1 && r==-1))
        cout<<"\nQUEUE is empty!";
    else if(f==r)
    {
        item=QUEUE[f];
        QUEUE[f]='~';
        f=-1;r=-1;
    }
    else if(f==MAX-1 && r>-1)
    {
        item=QUEUE[f];
        QUEUE[f]='~';
        f=0;
    }
    else
    {
        item=QUEUE[f];
        QUEUE[f++]='~';
    }

    return item;
}

void traversal()
{
    cout<<endl;
    cout<<"\n------------------- QUEUE STATUS -------------------\n";
    cout<<"front <---|";
    for(i=0;i<MAX;i++)
        cout<<' '<<QUEUE[i];
    cout<<"|<--- rear";
    cout<<"\n----------------------------------------------------\n";
    /*
    i=f;
    do
    {
        if(i==MAX-1)
            i=0;
        cout<<' '<<QUEUE[i++];
    }
    while(i!=r);
    */
}

int main()
{
    int choice; char item;
    do
    {
        cout<<"\n----------CIRCULAR QUEUE---------";
        cout<<"\n<1> INSERTION";
        cout<<"\n<2> DELETION";
        cout<<"\n<3> TRAVERSAL";
        cout<<"\n<4> EXIT";
        cout<<"\nEnter your choice :";
        cin>>choice;

        switch(choice)
        {
        case 1: // insertion
            {
                cout<<"\nEnter the item :";
                cin>>item;
                insertion(item);
                traversal();
                getch();
                break;
            }
        case 2: // deletion
            {
                item=delItem();
                cout<<"\nThe item deleted is :"<<item;
                traversal();
                getch();
                break;
            }
        case 3: // traversal
            {
                traversal();
                getch();
                break;
            }
        case 4: // exit
            {
                return 0;
            }
        }
    }
    while(1);

    return 0;
}
