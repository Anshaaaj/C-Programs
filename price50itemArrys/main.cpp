#include <iostream>
#include<stdio.h>
#include<iomanip>
#include<string.h>
# define MAX 10
using namespace std;

void showItemHeader();

class item
{
private:
    int itemno[MAX];
    char itemname[MAX][25]={"Rice","Wheat Flour","Mayo","Cheddar","Pasta Spirali",
                 "Olive Oil","Eggs","Brown Sugar","Seasoning","Herbs"};;
    float price[MAX]={150,160,99,260,90,475,50,140,79,79};
    float sumPrices();
    int findLargePrice();
public:
    item()
    {
        int i;
        for(i=0;i<MAX;i++)
        {
            itemno[i]=i+1;
        }
    }
    void getItem()
    {
        char ch;
        int i;
        for(i=0; i<MAX; i++)
        {
            cout<<"\nEnter the item no. :";
            cin>>itemno[i];
            cin.get(ch);
            cout<<"\nEnter the item name :";
            gets(itemname[i]);
            cin.get(ch);
            cout<<"\nEnter the price :";
            cin>>price[i];
            cin.get(ch);
        }
    }

    void showItem()
    {
        int i,num;
        cout<<"\n-------------ITEM LIST------------------\n";
        showItemHeader();
        for(i=0; i<MAX; i++)
        {
            cout.setf(ios::left);
            cout<<setw(8)<<itemno[i]<<setw(25)<<itemname[i]<<setw(7)<<price[i]<<endl;
        }
        cout<<"\nSum of all prices : Rs."<<sumPrices();

        num=findLargePrice();
        cout<<"\nThe item with largest price = \n";
        showItemHeader();
        cout.setf(ios::left);
        cout<<setw(8)<<itemno[num]<<setw(25)<<itemname[num]<<setw(7)<<price[num]<<endl;
    }
};

int item::findLargePrice()
{
    /* finding the largest price */
    float largePrice=0.0;
    int i,k;
    for(i=0; i<MAX; i++)
    {
        if(price[i]>largePrice)
        {
            largePrice=price[i];
            k=i;
        }
    }
    return k;
}

float item::sumPrices()
{
    float totPrice=0.0;
    int k,i;
    for(i=0; i<MAX; i++)
    {
        totPrice+=price[i];
    }
    return totPrice;
}


void showItemHeader()
{
    cout.setf(ios::left);
    cout<<"\n-------------------------------------------------------------\n";
    cout<<setw(8)<<"Itemno"<<setw(25)<<"ItemName"<<setw(7)<<"Price";
    cout<<"\n-------------------------------------------------------------\n";
}

int main()
{
    item prod;
    int i;

    //prod.getItem();
    prod.showItem();

    return 0;
}
