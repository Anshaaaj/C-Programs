#include <iostream>
#include<fstream>
#include<ctype.h>
#include<stdio.h>
using namespace std;

int main()
{
    ifstream fin("BOOK.txt");
    char ch; int cnt=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if(isalpha(ch))
        {
            if(islower(ch))
                    cnt++;
        }

    }
    cout<<"\nThe number of lower case alphabets :"<<cnt;
    return 0;
}
