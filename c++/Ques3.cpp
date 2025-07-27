//Create a class Car with data members brand, model, and year. Display data 
//using a member function

#include<iostream>
using namespace std;
class Car
{
    private:
    string brand;
    string model;
    int year;
    public:
    Car(string b,string m,int y)
    {
        brand=b;
        model=m;
        year=y;
    }
    void display()
    {
        cout<<"Brand: " <<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
int main()
{
    Car c1("Toyota","Fortuner",2020);
    c1.display();
    return 0;
}