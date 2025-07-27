//Define a class BankAccount with account number and balance. Include a 
//method to deposit money.
#include<iostream>
using namespace std;
class BankAccount
{
    private:
    int accountnumber;
    double balance;
    public:
    BankAccount(int accNum, double bal)
    {
        accountnumber = accNum;
        balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void display()
    {
        cout << "Account Number: " << accountnumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount account(123456, 1000.0);
    account.display();
    
    double depositAmount;
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    
    account.deposit(depositAmount);
    cout << "After deposit:" << endl;
    account.display();
    
    return 0;
}