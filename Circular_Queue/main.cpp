#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define MAX 5
int i,frnt=0,rear=0;
char QUEUE[50],item;

void insert()
{
    char ans='y';

    /* insert in a QUEUE */

    do
    {

        cout<<"\nEnter an item :";
        cin>>item;

        if((frnt==0 && rear==MAX-1) || (frnt==rear+1 && QUEUE[rear]!=NULL))
        {
            cout<<"\nError! QUEUE Overflow!";
            break;
        }
        else
        {
            if(rear+1>=MAX && frnt>0)
                rear=0;
            else if(QUEUE[rear]!=NULL)
                ++rear;
        }

        QUEUE[rear]=item;

        cout<<"\n\nContinue? (y/n) :";
        cin>>ans;

    }
    while(ans=='y');

    return;
}

void display()
{
    /* display the items of the QUEUE */

    cout<<"\n\nThe QUEUE elements are :\n";

    for(i=0; i<MAX; i++)
        cout<<QUEUE[i];


    return;
}

void deletion()
{
    char ans='y';

    /* deletion from a QUEUE */

    do
    {
        if(frnt==0 && rear==0 && QUEUE[frnt]==NULL)
        {
            cout<<"\n\nError! QUEUE Underflow!";
            break;
        }

        QUEUE[frnt]=0;

        if(frnt+1>=MAX)
            frnt=0;
        else
            frnt++;

        if(frnt!=0 && QUEUE[frnt]==NULL)
        {
            frnt=0;
            rear=0;
        }

        display();

        cout<<"\nContinue? (y/n) :";
        cin>>ans;
    }
    while(ans=='y');


}



int main()
{
    int choice;
    system("cls");
    while(1)
    {

        cout<<"\nMenu - QUEUE";
        cout<<"\n\n<1> Insertion";
        cout<<"\n\n<2> Deletion";
        cout<<"\n\n<3> Exit";

        cout<<"\n\nEnter your choice :";
        cin>>choice;


        switch(choice)
        {
        case 1:
        {
            insert();
            display();
            getch();
            break;

        }

        case 2:
        {
            deletion();
            getch();
            break;
        }

        case 3:
        {
            cout<<"\n\nGood Bye! That\'s all folks! ";
            getch();
            return 0;
        }

        }

    }


    getch();
    return 0;
}
