#include <iostream>

using namespace std;

/* Function draw() will print a character for a fixed number of times
which will resemble a line */

void draw();        // function1
void draw(int len); // function2
void draw(char c);  // function3
void draw(char c,int len);  // function4
int main()
{
    draw();
    return 0;
}

void draw()
{
    int i;
    for(i=1;i<=45;i++)
        cout<<"*";
}

void draw(int len)
{
    int i;
    for(i=1;i<=len;i++)
        cout<<"*";
}

void draw(char c)
{
    int i;
    for(i=1;i<=45;i++)
        cout<<c;
}

void draw(char c,int len)
{
    int i;
    for(i=1;i<=len;i++)
        cout<<c;
}
