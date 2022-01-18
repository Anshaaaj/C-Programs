// englobj.cpp
// objects using English measurements
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
private:
    int feet;
    float inches;
public:
    Distance()  // default constructor
    {
        feet=0;
        inches=0.0;
    }
    Distance(int ft, float in)  // parameterized constructor
    { feet = ft; inches = in; }
    void setdist(int ft, float in) //set Distance to args
    { feet = ft; inches = in; }
    void getdist() //get length from user
    {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    }
    Distance addDist(Distance);
    void add_dist(Distance,Distance);
    Distance operator+(Distance);
    void showdist() //display distance
    { cout << feet << "\'-" << inches << '\"'; }
};

void Distance::add_dist(Distance d1,Distance d2)
{
    feet=d1.feet+d2.feet;
    inches=d1.inches+d2.inches;
    while(inches>=12)
    {
        feet++;
        inches-=12;
    }
}

Distance Distance::addDist(Distance d)
{
    Distance temp;
    temp.feet=feet+d.feet;
    temp.inches=inches+d.inches;
    while(temp.inches>=12)
    {
        temp.feet++;
        temp.inches-=12;
    }
    return temp;
}

Distance Distance::operator+(Distance d) // operator overloading
{
    Distance temp;
    temp.feet=feet+d.feet;
    temp.inches=inches+d.inches;
    while(temp.inches>=12)
    {
        temp.feet++;
        temp.inches-=12;
    }
    return temp;
}
////////////////////////////////////////////////////////////////
int main()
{
    Distance dist1(11,6.25), dist2,dist3,dist4; //define two lengths
    //dist1.setdist(11, 6.25); //set dist1
    dist2.getdist(); //get dist2 from user
    //display lengths
    cout << "\ndist1 = "; dist1.showdist();
    cout << "\ndist2 = "; dist2.showdist();
    //dist3=dist1.addDist(dist2);
    dist3.add_dist(dist1,dist2);
    cout << "\ndist1 + dist2 = "; dist3.showdist();
    //dist4 = dist1+dist2+dist3;
    //cout << "\ndist1 + dist2 + dist3 = "; dist4.showdist();

    //Distance dist5(dist4);
    //Distance dist6 = dist2;
    //cout << "\ndist5(dist4) => dist5 = "; dist5.showdist();
    //cout << "\ndist6 = dist2 => dist6 = "; dist6.showdist();

    cout << endl;
    return 0;
}
