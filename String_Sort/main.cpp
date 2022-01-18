#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int n,i,j;
    char *temp=new char[25];
    cout<<"\nEnter the number of strings :";
    cin>>n;
    char *sname[n];
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter name #"<<i+1<<":";
        sname[i]=new char[25]; // create an array
        gets(sname[i]);
    }

    // Displaying the names before sorting
    cout<<"\nAll the names before sorting -->\n";
    for(i=0;i<n;i++)
    {
        cout<<"\n#"<<i+1<<":";
        puts(*(sname+i));
    }

    // Sorting the names in alphabetical order
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(strcmpi(sname[i],sname[j])>0)
            {
                strcpy(temp,sname[i]);
                strcpy(sname[i],sname[j]);
                strcpy(sname[j],temp);
            }
        }

    }

    //displaying the strings after sorting
    cout<<"\nAll the names after sorting -->\n";
    for(i=0;i<n;i++)
    {
        cout<<"\n#"<<i+1<<":";
        puts(sname[i]);
    }
    return 0;
}
