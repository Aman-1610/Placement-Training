//Create a class Employee with data members ID, name, salary. Use functions 
//to accept and show details
#include<iostream>
using namespace std;
class Employee
{
    private:
    int id;
    string name;
    double salary;

    public:
    // Function to accept employee details
    void acceptDetails(int empId, string empName, double empSalary)
    {
        id = empId;
        name = empName;
        salary = empSalary;
    }

    // Function to display employee details
    void displayDetails()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};
int main()
{
    Employee emp;
    emp.acceptDetails(101, "John Doe", 55000.50);
    emp.displayDetails();

    return 0;
}