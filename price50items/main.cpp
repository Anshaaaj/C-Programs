#include <iostream>
#include<stdio.h>
#include<iomanip>
#include<string.h>
# define MAX 100
using namespace std;

class item
{
private:
    int itemno;
    char itemname[25];
    float price;
public:
    item()
    {

    }
    item(int ino,char iname[],float p)
    {
        itemno=ino;
        strcpy(itemname,iname);
        price=p;
    }
    void getItem()
    {
        char ch;
        cout<<"\nEnter the item no. :";
        cin>>itemno;
        cin.get(ch);
        cout<<"\nEnter the item name :";
        gets(itemname);
        cin.get(ch);
        cout<<"\nEnter the price :";
        cin>>price;
        cin.get(ch);
    }
    void showItem()
    {
        cout.setf(ios::left);
        cout<<setw(8)<<itemno<<setw(25)<<itemname<<setw(7)<<price<<endl;
    }
    float getPrice()    // accessor function
    {
        return price;   // only return price of current item
    }
};  // class ends here

void showItemHeader()
{
    cout.setf(ios::left);
    cout<<"\n-------------------------------------------------------------\n";
    cout<<setw(8)<<"Itemno"<<setw(25)<<"ItemName"<<setw(7)<<"Price";
    cout<<"\n-------------------------------------------------------------\n";
}

void findLargePrice(item product[],int size)
{
    /* finding the largest price */
    float largePrice=0.0;int k,i;
    for(i=0;i<size;i++)
    {
        if(product[i].getPrice()>largePrice)
        {
            largePrice=product[i].getPrice();
            k=i;
        }
    }
    cout<<"\nThe item with largest price = \n";
    showItemHeader();
    product[k].showItem();
    cout<<"-------------------------------------------------------------\n";

}

float sumPrices(item product[],int size)
{
    float totPrice=0.0;int k,i;
    for(i=0;i<size;i++)
    {
        totPrice+=product[i].getPrice();
    }
    return totPrice;
}



int main()
{
    item prod[MAX];
    /*
    item prod[]={{1,"Gram Flour",120},
                {2,"Seasoning",140},
                {3,"Herbs",79},
                {4,"Cheese",150},
                {5,"Rice Flour",120}};
                */
    int i,n;
    //int i,n=5;

    cout<<"\nEnter the number of items :";
    cin>>n;
    cout<<"\nEnter the item details :\n";
    for(i=0;i<n;i++)
    {
        cout<<"\nItem #"<<i+1<<":";
        prod[i].getItem();
    }

    cout<<"\n-------------ITEM LIST------------------\n";
    showItemHeader();
    for(i=0;i<n;i++)
        prod[i].showItem();
    cout<<"-------------------------------------------------------------\n";
    findLargePrice(prod,n);
    cout<<"\nSum of all prices : Rs."<<sumPrices(prod,n);
    return 0;
}
