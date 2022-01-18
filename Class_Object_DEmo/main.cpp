#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Student
{
private:
    char sname[25],Class[4],section[2];
    int rollno;
    long fee;
public:
    Student()   // default constructor
    {
        strcpy(sname,"NOTALLOCATED");
        strcpy(Class,"NA");
        strcpy(section,"A");
        rollno=0;
        fee=0;
    }

    // Parameterized constructor
    Student(char *sn,char *cl,char *sc,int rno,long f)
    {
        strcpy(sname,sn);
        strcpy(Class,cl);
        strcpy(section,sc);
        rollno=rno;
        fee=f;
    }

    void getstudent()
    {
        char ch;
        cin.get(ch);
        cout<<"\nEnter the roll no. :";
        cin>>rollno;
        cin.get(ch);
        cout<<"\nEnter the name :";
        gets(sname);
        cin.get(ch);
        cout<<"\nEnter the class :";
        gets(Class);
        cin.get(ch);
        cout<<"\nEnter the section :";
        gets(section);
        cin.get(ch);
        cout<<"\nEnter the fee :";
        cin>>fee;

    }

    void display();
};

void Student::display()
{
        cout<<"\nRoll No."<<rollno<<" Name : ";puts(sname);
        cout<<"\nClass : "<<Class<<" "<<section;
        cout<<"\nFee : Rs."<<fee;
}

int main()
{
    // local temporary database
    Student s[]={{"Kavita","XII","B",56,6000},
                {"Anshul","XII","A",1,6000},
                {"Monica","XII","A",23,5000},
                {"Vinita","XI","B",50,7000},
                {"Seema","XII","C",45,6500}},s6;

    int i;
    /*cout<<"\n-------ENTER STUDENT DETAILS ------------\n";
    for(i=0;i<5;i++)
    {
        cout<<"\nStudent #"<<i+1<<":";
        s[i].getstudent();
    }*/

    cout<<"\n------- STUDENT DETAILS ------------\n";
    for(i=0;i<5;i++)
    {
        cout<<"\nStudent #"<<i+1<<":";
        s[i].display();
        cout<<"\n------------------------------------------------------\n";
    }

    s6.display();
    /*Student s1,s2("Kavita","XII","B",56,6000);
    // for s1 - default constructor called
    // for s2 - parameterized constructor called
    s1.display();
    s2.display();
    */
    return 0;
}
