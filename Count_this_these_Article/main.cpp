#include <iostream>
#include<fstream>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    ifstream fin("ARTICLE.txt");
    char ch,str[50]={NULL},word1[25],word2[25]; int cnt1=0,cnt2=0,i=-1;
    cout<<"\nEnter the first Word :";
    cin>>word1;
    cout<<"\nEnter the second Word :";
    cin>>word2;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch==' ' || ch=='.' || ch==',')
        {
                str[++i]='\0';
                i=-1;
                //cout<<"\n"<<str;
                if(strcmpi(str,word1)==0)
                        cnt1++;
                else if(strcmpi(str,word2)==0)
                        cnt2++;
        }
        else
                str[++i]=ch;

        //getch();
    }
    cout<<"\nNo.of \'"<<word1<<"\' words = "<<cnt1;
        cout<<"\nNo.of \'"<<word2<<"\' words = "<<cnt2;
    return 0;
}
