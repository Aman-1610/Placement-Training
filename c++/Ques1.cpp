//Write a C++ program to create a class Student with data members name and 
//rollNo. Create and display objects.

#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    int rollnumber;
    string name;
    public:
    Student(int r,string n)
    {
        rollnumber=r;
        name=n;
    }
    void display()
    {
        cout<<"Name: " <<name<<endl;
        cout<<"Roll Number: "<<rollnumber<<endl;
    }
};
int main()
{
    Student s1(101,"AmanKumar");
    s1.display();
}