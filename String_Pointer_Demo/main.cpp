#include<iostream>
using namespace std;

int main()
{
    char name[]="Cupertown";          //declare a string
    /*
    for(int i=0;name[i]!='\0';i++)
        cout<<"..."<<name[i];
    */

    /*
    char *cp;       // a char pointer
    for(cp=name;*cp!='\0';cp++)
        cout<<"..."<<*cp;
        */
    int i;
    char *cp=name;
       // a char pointer
    for(i=0;*(cp+i)!='\0';i++)
        cout<<"..."<<*(cp+i);
    /*
    int i;       // a char pointer
    for(i=0;name[i]!='\0';i++)
        cout<<"..."<<name[i];
        */
    return 0;
}
