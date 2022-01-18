#include <iostream>
#include<string.h>
using namespace std;

class Item
{
private:
    int Itemno;
    char ItemName[25];
    float Price;
public:
    Item()
    {
        Itemno=0;
        strcpy(ItemName,"NONAME");
        Price=0.0;
    };           // default constructor
    Item(int ino,char* inm,float p) // parameterized constructor
    {
        Itemno=ino;
        strcpy(ItemName,inm);
        Price=p;
    }
    void getItem();
    void Display();
};

void Item::Display()
{
    cout<<"\n"<<Itemno<<" : "<<ItemName<<" : "<<Price;
}

int main()
{
    Item I1;
    I1.Display();
    Item I[]={{1,"Television",10000},
              {2,"Refrigerator",18000},
              {3,"Smartphone",12000},
              {4,"CPU",10000},
              {5,"Monitor",19000}};
    for(int i=0;i<5;i++)
        I[i].Display();
    return 0;
}
