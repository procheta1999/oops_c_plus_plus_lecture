#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class parent // abstract class
{
public:
virtual void show()=0;
// {
//     cout<<"parent"<<endl;
// }
//no body in pure virtual function
};
class boy: public parent{
    void show()
    {
        cout<<"boy"<<endl;
    }
};
class girl:public parent
{
    void show()
    {
        cout<<"girl"<<endl;
    }
};
int main()
{
parent *ptr;
ptr=new boy();
ptr->show();
ptr=new girl();
ptr->show();

}