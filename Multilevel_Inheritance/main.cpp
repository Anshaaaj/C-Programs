#include <iostream>
#include<stdio.h>
using namespace std;
const int LEN=25;

class Person
{
    char name[LEN];
    int age;
public:
    void readperson();
    void displayperson()
    {
        cout<<"Name :";
        cout.write(name,LEN);
        cout<<"\t Age :"<<age<"\n";
    }

};

void Person
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
