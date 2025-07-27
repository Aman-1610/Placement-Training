//Create a class Time with hours, minutes, seconds. Write a function to display 
//time in HH:MM:SS format.
#include<iostream>
using namespace std;
class Time
{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    // Constructor to initialize time
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to display time in HH:MM:SS format
    void display()
    {
        cout << "Time: ";
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};
int main()
{
    // Create a Time object
    Time t(10, 5, 30);
    
    // Display the time
    t.display();
    
    return 0;
}