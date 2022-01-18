#include <iostream>

using namespace std;


struct Node
{
    char info;  // info/data part
    Node *link; // pointer to another node of the same type
};

int main()
{
    Node *ptr=new Node;

    ptr->info='A';
    ptr->link=NULL;

    Node *temp=new Node;
    temp->info='B';
    temp->link=NULL;
    ptr->link=temp;
    cout<<ptr;
    cout<<endl<<ptr->info<<" : "<<ptr->link;
    cout<<endl<<temp->info<<" : "<<temp->link;
    return 0;
}
