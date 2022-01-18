#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    time_t t;
    int seedval=time(&t),l=1,u=100,num,guess,chance=0;
    srand(seedval);
    num=l+(rand()%(u-l+1));
    cout<<"\nI have thought of a number between 1 and 100";
    cout<<"\nMake a guess, what is my number?";
    do
    {
        chance++;
        cin>>guess;
        if(guess<num)
            cout<<"\nToo low! Try again->";
        else if(guess>num)
            cout<<"\nToo high! Try again->";
        else
        {
            cout<<"\nBingo! You guessed right in "<<chance<<" guesses!";
            break;
        }

    }
    while(chance<=3);
    if(guess!=num)
    {
        cout<<"\nSorry! You used all possible guesses! Better luck next time!";
        cout<<"\nThe number was = "<<num;
    }

    cout<<"\nThank you for playing !";
    return 0;
}
