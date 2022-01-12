#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void show() //virtual makes the function not callable but without it, this base function is called only.
    {
        cout<<"Base"<<endl;
    }
};
class derv1:public Base{
    public:
    void show()
    {
 cout<<"Derived 1"<<endl;
    }
   
};
class derv2:public Base{
     public:
    void show()
    {
 cout<<"Derived 2"<<endl;
    }
};
int main()
{
   Base *ptr;
   *ptr=new derv1;
   ptr->show();
   return 0;
}