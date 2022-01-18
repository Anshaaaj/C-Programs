#include <iostream>
#include<conio.h>
using namespace std;

class Student
{
private:
    int RollNo;
    char Stud_Name[25];
    float Marks[5];                     // array within a class

    float get_Percentage()
    {
        float per=0.0;
        for(int i=0;i<5;i++)
            per+=Marks[i];
            per/=5;
            return per;

    }

public:
    void get_Student();
    void show_Student();
};

void Student::get_Student()
{
    cout<<"\nEnter the roll number :";cin>>RollNo;
    cout<<"\nEnter the name :";cin>>Stud_Name;
    cout<<"\nEnter the marks :";
    for(int i=0;i<5;i++)
        cin>>Marks[i];
}

void Student::show_Student()
{
    cout<<"\n"<<RollNo<<" , "<<Stud_Name;
    cout<<"\nMarks in 5 subjects :\n";
    for(int i=0;i<5;i++)
        cout<<Marks[i]<<"\t";
        cout<<"\nPercentage :"<<get_Percentage();
}


int main()
{
    Student s1;
    s1.get_Student();
    s1.show_Student();
    return 0;
}
