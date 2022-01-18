/* Dynamic Linear Queue */
#include <iostream>
struct Queue
{
    char info;
    Queue *link;
} *frnt,*rear;
using namespace std;

void Insert(char item)
{
    Queue *temp=new Queue;

    if(temp==NULL)
        cout<<"\nQueue is full!";
    else if(frnt==NULL && rear==NULL)
    {
        temp->info=item;
        temp->link=NULL;
        frnt=temp;
        rear=temp;
    }
    else
    {
        temp->info=item;
        temp->link=NULL;
        rear->link=temp;
        rear=temp;
    }

}

void Traverse()
{
    Queue *curr=frnt;
    while(curr!=NULL)
    {
        cout<<'\t'<<curr->info<<" -->";
        curr=curr->link;
    }
}

char Delete()
{
    char item='#';
    Queue *temp;
    if(frnt==NULL)
        cout<<"\nQueue is empty!";
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
        item=temp->info;
        frnt=frnt->link;
        delete temp;
    }
    return item;

}

int main()
{
    char item,ans;int choice;
    do
    {
        cout<<"\n-------------DYNAMIC LINEAR QUEUE-------------";
        cout<<"\n<1>INSERT";
        cout<<"\n<2>DELETE";
        cout<<"\n<3>TRAVERSE";
        cout<<"\n<4>EXIT";
        cout<<"\nEnter your choice :";
        cin>>choice;
        switch(choice)
        {
        case 1: // insertion in a linear queue
            {
                cout<<"\nEnter the item :";cin>>item;
                Insert(item);
                Traverse();
                break;
            }
        case 2:
            {
                item=Delete();
                if(item!='#')
                    cout<<"\nThe item deleted is : "<<item;
                else
                    cout<<"\nThere is no item to delete!";
                cout<<endl;
                Traverse();
                break;
            }
        case 3:
            {
                Traverse();break;
            }
        case 4:
            {
                return 0;
            }
        } // switch end
    } // do-while end
    while(1);
    return 0;
}
