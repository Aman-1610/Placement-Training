//Create a class Rectangle with length and breadth. Write functions to calculate 
//area and perimeter.
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void display()
    {
        cout<<"length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Area: "<<length*breadth<<endl;
        cout<<"Perimeter: "<<2*(length+breadth)<<endl;
    }
};
int main()
{
    Rectangle r1(10,5);
    r1.display();
    return 0;
}