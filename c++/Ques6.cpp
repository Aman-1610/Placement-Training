//Define a class Book with title, author, and price. Use a function to set and 
//display data.
#include<iostream>
using namespace std;
class Book
{
    private:
    string title;
    string author;
    double price;

    public:
    // Function to set book details
    void setDetails(string t, string a, double p)
    {
        title = t;
        author = a;
        price = p;
    }

    // Function to display book details
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main()
{
    Book myBook;
    myBook.setDetails("The Great Gatsby", "F. Scott Fitzgerald", 10.99);
    myBook.display();

    return 0;
}