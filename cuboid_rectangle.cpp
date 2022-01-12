#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    
    // Rectangle(int x,int y)
    // {
    //     length=x;
    //     breadth=y;
    // }
    void calculateArea()
    {
        cout<<"Area of rectangle is"<<length*breadth<<endl;
    }
};
class Cuboid:public Rectangle{
public:
int height;
// Cuboid(int z)
// {
//     height=z;
// }
void getVolume()
{
    cout<<length<<endl;
    cout<<breadth<<endl;
    cout<<height<<endl;
    cout<<"Volume: "<<length*breadth*height<<endl;
}
};
int main()
{
    Rectangle rect;
    rect.length=20;
    rect.breadth=30;
    rect.calculateArea();
    Cuboid cub;
    cub.length=20;
    cub.breadth=30;
    cub.height=50;
    // cub.calculateArea();
    cub.getVolume();
return 0;
}