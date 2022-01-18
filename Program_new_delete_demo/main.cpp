#include<iostream>
using namespace std;
int *rollno,i;        //declare an int pointer for rollno array
float *marks;   //declare a float pointer for marks array
int main()
{
    int size;
    cout<<"\nHow many elements are there in the array?";
    cin>>size;
    rollno=new int[size];       //dynamically allocate rollno array
    marks=new float[size];  //dynamically allocate marks array
    //check whether the memory is available or not
    if((!rollno) || (!marks))
    {
        cout<<"Out of memory! Aborting!";
        return 1;

    }
//Read in values in the array elements
for(i=0;i<size;i++)
{
    cout<<"Enter rollno and marks for student "<<(i+1)<<": \n";
    //cin>>rollno[i]>>marks[i];
    cin>>*(rollno+i)>>*(marks+i);
}

//Display the array contents
cout<<"\tRoll no \tMarks\n";
for(i=0;i<size;i++)
{
    //cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<"\n";
    cout<<"\t"<<*(rollno+i)<<"\t\t"<<*(marks+i)<<"\n";
}

delete[]rollno; // deallocating the array for rollno
delete[]marks;  // deallocating the array for marks
return 0;
}
