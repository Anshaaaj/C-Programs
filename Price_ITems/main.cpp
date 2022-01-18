#include <iostream>

using namespace std;
class ITEM
{
    char ItemName[15];      // array within the class
    float price;
public:
    void GetItem();
    void Show();
    float getPrice()        // accessor function (getter)
    {
        return price;
    }


};

void ITEM::GetItem()
{
    cout<<"\nEnter the Item Name :";
    cin>>ItemName;
    cout<<"\nEnter the Price :";
    cin>>price;
}

void ITEM::Show()
{
    cout<<"\n"<<ItemName<<" : "<<price;
}


int main()
{
    ITEM item[20];      // array of objects of class ITEM
    int i;float sum=0.0;
    cout<<"\nEnter the Item Details :\n";
    for(i=0;i<20;i++)
    {
        cout<<"\nItem #"<<i+1<<":";
        item[i].GetItem();
    }

    /* Sum of all prices */
    for(i=0;i<20;i++)
    {
        sum+=item[i].getPrice();
    }

    cout<<"\nSum of all prices : Rs."<<sum;

    /* Largest of all prices */
    float big=0.0;int index=0;
    for(i=0;i<20;i++)
    {
        if(item[i].getPrice()>big)
        {
            big=item[i].getPrice();
            index=i;
        }

    }

    cout<<"\nThe item with the largest price : \n";
    item[index].Show();


    return 0;
}
