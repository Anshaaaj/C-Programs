#include<iostream>
#include<conio.h>

using namespace std;

struct Node
{
    char data;
    Node *link;
};

Node *start,*curr,*prev;
void create()
{

    start=new Node;
    cout<<"\nEnter the item :";
    cin>>start->data;
    start->link=NULL;
}

void insert_begin()
{
    Node *temp;
    temp=new Node;
    temp->link=start;
    start=temp;
    cout<<"\nEnter the item :";
    cin>>temp->data;
}

void insert_end()
{

    curr=start;
    while(curr->link!=NULL)
    {
        curr=curr->link;
    }


    curr->link=new Node;
    curr=curr->link;
    cout<<"\nEnter the item :";
    cin>>curr->data;
    curr->link=NULL;
}

void insert_before()
{
    char item;
    cout<<"\nEnter the node after which to insert:";
    cin>>item;
    curr=start;
    do
    {
        if(curr->data==item)
            break;
        else
        {
            prev=curr;
            curr=curr->link;

        }
    }
    while(curr!=NULL);
    Node *temp=new Node;
    temp->link=prev->link;
    prev->link=temp;
    cout<<"\nEnter the item :";
    cin>>temp->data;

}

void insert_after()
{
    char item;
    cout<<"\nEnter the node after which to insert:";
    cin>>item;
    curr=start;
    do
    {
        if(curr->data==item)
            break;
        else

            curr=curr->link;


    }
    while(curr!=NULL);
    Node *temp=new Node;
    temp->link=curr->link;
    curr->link=temp;
    cout<<"\nEnter item to insert :";
    cin>>temp->data;

}

void del_given()
{
    char item;
    cout<<"\nEnter the node to be deleted :";
    cin>>item;

    curr=start;
    do
    {
        if(curr->data==item)
            break;
        else
        {
            prev=curr;
            curr=curr->link;

        }
    }
    while(curr!=NULL);
    prev->link=curr->link;
    delete curr;

}


void del_begin()
{
    Node *temp;
    temp=start->link;
    delete start;
    start=temp;

}

void del_end()
{


    curr=start;
    do
    {

        prev=curr;
        curr=curr->link;
    }
    while(curr->link!=NULL);
    delete curr;
    prev->link=NULL;
}

void display()
{
    curr=start;
    do
    {
        cout<<curr->data<<" : "<<curr<<" ---> ";
        curr=curr->link;

    }
    while(curr!=NULL);
}

int main()
{
    int choice;
    do
    {

        cout<<"\n\t--------------LINKED LIST-----------------";
        cout<<"\n\n<1> CREATION";
        cout<<"\n\n<2> INSERTION";
        cout<<"\n\n<3> DELETION";
        cout<<"\n\n<4> EXIT";
        cout<<"\n\n-----------------------------------------";
        cout<<"\nEnter your choice :";
        cin>>choice;

        switch(choice)
        {
        case 1:
        {
            create();
            display();
            getch();
            break;
        }
        case 2:
        {
            cout<<"\n\n-----------------INSERTION-----------------";
            cout<<"\n<i> IN THE BEGINNING";
            cout<<"\n<ii> AT THE END";
            cout<<"\n<iii> AFTER A GIVEN NODE";
            cout<<"\n<iv> BEFORE A GIVEN NODE";
            cout<<"\n<v> BACK";
            cout<<"\n\n-------------------------------------------";
            cout<<"\nEnter your choice :";
            cin>>choice;
            switch(choice)
            {
            case 1:
            {
                insert_begin();
                display();
                getch();
                break;
            }
            case 2:
            {
                insert_end();
                display();
                getch();
                break;
            }
            case 3:
            {
                insert_after();
                display();
                getch();
                break;
            }
            case 4:
            {
                insert_before();
                display();
                getch();
                break;
            }
            case 5:
            {
                break;
            }


            }
            break;
        }
        case 3:
        {
            cout<<"\n\n-----------------DELETION-----------------";
            cout<<"\n<i> FROM THE BEGINNING";
            cout<<"\n<ii> FROM THE END";
            cout<<"\n<iii> OF A GIVEN NODE";
            cout<<"\n<iv> BACK";
            cout<<"\n\n-------------------------------------------";
            cout<<"\nEnter your choice :";
            cin>>choice;
            switch(choice)
            {
            case 1:
            {
                del_begin();
                display();
                getch();
                break;
            }
            case 2:
            {
                del_end();
                display();
                getch();
                break;
            }
            case 3:
            {
                del_given();
                display();
                getch();
                break;
            }

            case 4:
            {
                break;
            }


            }
            break;

        }
        case 4:
        {
            return 0;
        }
        }
    }
    while(1);
}
