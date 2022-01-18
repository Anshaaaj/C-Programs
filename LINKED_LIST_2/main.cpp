#include <iostream>

struct NODE
{
    char info;
    NODE *link;
};
NODE *start; // global pointer variable

using namespace std;
void Insert_Beg(char item)
{
    NODE *temp=new NODE;
    temp->info=item;
    temp->link=start;

    start=temp;
}

void Insert_End(char item)
{
    NODE *temp=new NODE;
    temp->info=item;
    temp->link=NULL;
    NODE *curr=start;
    while(curr->link!=NULL)
    {
        curr=curr->link;
    }
    curr->link=temp;
}

void Insert_After(char item,char element)
{
    NODE *curr=start;
    NODE *temp=new NODE;
    temp->info=item;
    while(curr->link!=NULL)
    {
        if(curr->info==element)
            break;
        else
            curr=curr->link;
    }

    temp->link=curr->link;
    curr->link=temp;

}

void Traverse()
{
    NODE *curr=start;
    /*while(curr!=NULL)
    {
        cout<<"\nINFO : "<<curr->info<<" : Next --> "<<curr->link;
        curr=curr->link;
    }
    curr=start;*/
    cout<<endl;
    while(curr!=NULL)
    {
        cout<<"\t"<<curr->info<<" --> ";
        curr=curr->link;
    }
}
int main()
{
    /* Creation of the list */
    start=new NODE;
    char item,ele;
    cout<<"\nEnter the item :";cin>>item;
    start->info=item;
    start->link=NULL;
    cout<<"\nINFO : "<<start->info<<" : Next --> "<<start->link;

    /* Insertion at the beginning of list */
    cout<<"\nEnter an item to be inserted :";cin>>item;
    Insert_Beg(item);
    Traverse();

    /* Insertion at the end of list */
    cout<<"\nEnter an item to be inserted :";cin>>item;
    Insert_End(item);
    Traverse();

    /* Insertion after a given node */
    cout<<"\nEnter an item to be inserted :";cin>>item;
    cout<<"\nEnter element which is to be searched :";cin>>ele;
    Insert_After(item,ele);
    Traverse();
    return 0;
}
