#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class base{
    public:
    base()
    {
        cout<<"base default constructor"<<endl;
    }
    base(int b)
    {
        cout<<b<<endl;
    }
    void Msg()
    {
        cout<<"Base"<<endl;
    }
};
class derived:public base{
    public:
derived()
{
    cout<<"derived default constructor"<<endl;
}
derived(int d) :base(d)
{
    cout<<d<<endl;
}
void Msg()
    {
        cout<<"Derived"<<endl;
        base::Msg();
    }
};
int main()
{
    derived d;
    d.Msg();
    derived d1(9);
    return 0;
}