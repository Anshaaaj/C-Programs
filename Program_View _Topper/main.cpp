#include <iostream>
#include<stdio.h>
#include<iomanip>
#include<string.h>
using namespace std;
class Student               // class definition
{
    int RollNo;                 // private data members
    char sname[25];
    float marks;
    float getPercent()  // private member function to return percentage
    {
        return marks/500*100;
    }

public:
    Student()       // default constructor
    {
        RollNo=0;
        strcpy(sname,"NOT ASSIGNED");
        marks=0.0;
    }

    Student(int r,char *sn,float m)     // parameterized constructor
    {
        RollNo=r;strcpy(sname,sn);marks=m;
    }

    void getData();         // read data
    void Show();            // show data
    float getmarks()        // accessor function for marks
    {
        return marks;
    }
    int getRollNo()         // accessor function for RollNo
    {
        return RollNo;

    }
};              // class definition end

void Student::getData()         // outline definition of member function getData()
{
    char ch;
    cout<<"\nEnter the Roll No. :";cin>>RollNo;
    cin.get(ch);            // flushing the buffer
    cout<<"\nEnter name of student :";gets(sname);
    cout<<"\nEnter the total marks :";cin>>marks;
}

void Student::Show()        // outline definition of member function Show()
{
    cout.setf(ios::right);
    cout<<"\n"<<setw(5)<<"RollNo"<<setw(25)<<"Name"<<setw(8)<<"Marks"<<setw(8)<<"%";
    cout<<"\n-----------------------------------------------------------------------------";
    cout<<"\n"<<setw(5)<<RollNo<<setw(25)<<sname<<setw(8)<<marks<<setw(8)<<getPercent()<<"%";
    cout<<"\n-----------------------------------------------------------------------------";
}

int main()
{
    Student s[]={{1,"Amit",450},{2,"Raghav",400},{3,"Zenab",465},{4,"Ajay",350},{5,"Roshan",467},{6,"Neha",366},{7,"Rahul",433},{8,"Anand",386},{9,"Kewal",390},{10,"Kishore",200}};
    //Student s[10];
    int i,rno;float big=0.0,per;
    /*
    cout<<"\nEnter the details of 10 students :\n";
    for(i=0;i<10;i++)
    {
        cout<<"\n\tStudent #"<<i+1<<":";
        s[i].getData();
    }
    */
    for(i=0;i<10;i++)
    {
            per=s[i].getmarks()/500*100;
            if(per>big)
            {
                big=per;
                rno=i;
            }
    }

    cout<<"\nTopper of the class -->";
    s[rno].Show();


    cout<<"\nEnter the roll no of the student :";
    cin>>rno;
    for(i=0;i<10;i++)
    {
        if(s[i].getRollNo()==rno)
        {
            s[i].Show();break;
        }
    }
    return 0;
}
