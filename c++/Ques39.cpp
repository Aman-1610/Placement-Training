//Overload + operator for a class Complex.
#include<iostream>
using namespace std;
class Complex
{
    private:
    double real;
    double imag;

    public:
    // Constructor to initialize complex number
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload + operator to add two complex numbers
    Complex operator+(const Complex& other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to display the complex number
    void display()
    {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}