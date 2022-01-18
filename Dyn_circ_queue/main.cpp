#include <iostream>
struct Queue
{
    char info;
    Queue *link;
} *tail=NULL;
using namespace std;

void Insert(char item)
{
    Queue *temp=new Queue;
    if(temp==NULL)
        cout<<"\nQueue is full!";
    else if(tail==NULL)
    {
        temp->info=item;
        tail=temp;
        temp->link=tail;
    }
    else
    {
        temp->info=item;
        temp->link=tail;
        tail->link=temp;
        tail=temp;
    }
}

/*char Delete()
{
    char item;Queue *temp;
    if(frnt==NULL)
        cout<<"\nQueue is Empty!";
    else if(frnt==rear)
    {
        temp=frnt;
        item=temp->info;
        frnt=NULL;
        rear=NULL;
        delete temp;
    }
    else
    {
        temp=frnt;
        item=
    }
}*/

void Traversal()
{
    Queue *curr=tail->link;
    while(curr!=tail)
    {
        cout<<"\n"<<curr->info<<" : Next is --> "<<curr->link;
        curr=curr->link;
    }
}

int main()
{
    int choice;char item;
    do
    {
        cout<<"\n--------------DYNAMIC CIRCULAR QUEUE-----------------";
        cout<<"\n<1> INSERTION";
        cout<<"\n<2> DELETION";
        cout<<"\n<3> TRAVERSAL";
        cout<<"\n<4> EXIT";
        cout<<"\nEnter your choice : ";cin>>choice;
        switch(choice)
        {
        case 1: // Insertion
            {
                cout<<"\nEnter the item :";cin>>item;
                Insert(item);
                Traversal();
                break;
            }
        case 2: // Deletion
            {

            }
        case 3: //Traversal
            {

            }
        case 4: //Exit
            {
                return 0;
            }
        }
    }
    while(1);
    return 0;
}
