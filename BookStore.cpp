#include <iostream>
#include <string>
using namespace std;

const string titleOfBook[] = {"Java Programming", "Python Programming", "C++ Programming", "C Programming", "JavaScript Programming"};
float priceOfBook[] = {500, 399, 499, 199, 299};  
int stockOfBook[] = {10, 5, 8, 12, 7};

class BookStore 
{
    public:
        BookStore() 
        {
            cout << "Book Store Initialized!" << endl;
        }

        void displayBooks() 
        {
            int numBooks = sizeof(titleOfBook) / sizeof(titleOfBook[0]);
            cout << "Available Books:" << endl;
            for (int i = 0; i < numBooks; i++) 
            {
                cout << titleOfBook[i] << " - Rs." << priceOfBook[i]
                    << " (Stock: " << stockOfBook[i] << ")" << endl;
            }
        }

        void borrowBook(string title) 
        {
            int numBooks = sizeof(titleOfBook) / sizeof(titleOfBook[0]);
            for (int i = 0; i < numBooks; i++) 
            {
                if (titleOfBook[i] == title) 
                {
                    if (stockOfBook[i] > 0) 
                    {
                        stockOfBook[i]--;
                        cout << "You have borrowed: " << titleOfBook[i] << endl;
                    } 
                    else 
                    {
                        cout << "Sorry, " << titleOfBook[i] << " is out of stock." << endl;
                    }
                    return; 
                }
            }
            cout << "Book not found in our collection." << endl;
    }
};

int main() 
{
    BookStore store;
    store.displayBooks();

    string title;
    cout << "\nEnter the title of the book you want to borrow: ";
    getline(cin, title); 
    store.borrowBook(title);

    cout << "\nUpdated List:\n";
    store.displayBooks();

    return 0;
}
