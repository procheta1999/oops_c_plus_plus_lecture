#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Phone
{
private:
string name;
float RAM;
string processor;
int battery;
public:
Phone(string input_name="Null",float RAM_input=0.0,string processor_input="Null",int battery_input=0)
{
    name=input_name;
    RAM=RAM_input;
    processor=processor_input;
    battery=battery_input;
}
Phone(Phone &phone_obj)
{
   name=phone_obj.name;
    RAM=phone_obj.RAM;
    processor=phone_obj.processor;
    battery=phone_obj.battery; 
}
void getData()
{
    cout<<"Your phone is"<<name<<endl;
    cout<<"RAM amount is"<<RAM<<endl;
    cout<<"processor is"<<processor<<endl;
    cout<<"battery is"<<battery<<endl;
}
};
int main()
{
   string name;
   float RAM;
   string processor;
   int battery;
   cout<<"Input phone name: ";
   cin>>name;
   cout<<"Input RAM: ";
   cin>>RAM;
   cout<<"Input processor: ";
   cin>>processor;
   cout<<"Input battery";
   cin>>battery;
   Phone myPhone(name,RAM,processor,battery);
   Phone friendPhone(myPhone);
   friendPhone.getData();
   myPhone.getData();
}