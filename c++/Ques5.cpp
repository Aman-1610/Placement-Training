//Create a class Complex for complex numbers. Initialize and display complex 
//numbers.
#include<iostream>
using namespace std;    
class Complex
{
    private:
    double real;
    double imag;
    
    public:
    // Constructor to initialize complex number
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    
    // Function to display the complex number
    void display()
    {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};  
int main()
{
    // Create a complex number object
    Complex c1(3.5, 2.5);
    
    // Display the complex number
    c1.display();
    
    return 0;
}