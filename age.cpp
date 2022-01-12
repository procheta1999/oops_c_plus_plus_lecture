#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    float height;
    public:
    // Person() //default constructor
    // {
    //     name="Null";
    //     age=0;
    //     height=0.0f;
    // }
    //if constructor not intialized, then class builds it s own constructor and assigns garbage values to it
    Person(string name_a="Null", int age_a=0, float height_a=0.0f) // parametrized constructor
    {
        name=name_a;
        age=age_a;
        height=height_a;
    }
    Person(Person &obj) //copy constructor
    {
       name=obj.name;
       age=obj.age;
       height=obj.height; 
    }
    void getData()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<height<<endl;
    }
};
int main()
{
    Person obj, obj2("pro",22,5.6),obj3(obj2);
    obj.getData();
    obj2.getData();
    obj3.getData();
    return 0;
}