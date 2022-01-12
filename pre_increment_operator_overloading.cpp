#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Person{
private:
 int weight;
 public:
 Person(int w=0)
 {
     weight=w;
 }
 void PrintWeight()
 {
     cout<<"Weight: "<<weight<<endl;
 }
 void operator++()
 {
     ++weight;
 }
 void operator++(int) //post-increment overloading
 {
     weight++;
 }
};
int main()
{
    Person Jon(78);
    ++Jon;
    Jon++;
    Jon.PrintWeight();
    return 0;
}