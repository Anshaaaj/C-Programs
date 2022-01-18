class X
{
public:
    int a;
    int sqr(int a)
    {
        return a*a;
    }
};      // object created of type X

X Ob1;
int main()
{
    int b;
    Ob1.a=10;
    b=Ob1.sqr(15);
        :
}
