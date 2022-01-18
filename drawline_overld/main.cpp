#include <iostream>
#include<conio.h>
using namespace std;
void drawline();
void drawline(int len);
void drawline(int len,char ch);
int main()
{
    int choice,l;char c;
    do
    {

    cout<<"\n----------------------DRAW LINE---------------------";
    cout<<"\nMETHOD 1 - DRAWLINE()";
    cout<<"\nMETHOD 2 - DRAWLINE(SIZE OF LINE)";
    cout<<"\nMETHOD 3 - DRAWLINE(SIZE AND CHARACTER)";
    cout<<"\nMETHOD 4 - EXIT";
    cout<<"\n------------------------------------------------------------";
    cout<<"\nEnter your choice :";cin>>choice;
    switch(choice)
    {
    case 1:
        {drawline();
        getch();
        break;}
    case 2:
        {
            cout<<"\nEnter the length of line :";cin>>l;
            drawline(l);getch();
            break;
        }
    case 3:
        {
            cout<<"\nEnter the length of line :";cin>>l;
            cout<<"\nEnter the character :";cin>>c;
            drawline(l,c);getch();
            break;
        }
    case 4:
        return 0;

    }   // switch end
    }   //do-while end
    while(1);

} // main() end

void drawline()
{
    for(int i=1;i<20;i++)
        cout<<'*';
}

void drawline(int len)
{
    for(int i=1;i<len;i++)
        cout<<'*';
}

void drawline(int len,char ch)
{
    for(int i=1;i<len;i++)
        cout<<ch;
}
