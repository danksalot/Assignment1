#include <iostream>

using namespace std;

int calculateSeconds(int, int, int);

int main()
{
    int hours;
    int minutes;
    int seconds;
    
    cout << "Please enter a length of time:" << endl << "Hours: "; 
    cin >> hours;
    
    while (hours < 0)
    {
        cout << "Hours must be a positive number.  Please try again." << endl << "Hours: ";
        cin >> hours;
    };
    
    cout << "Minutes: ";
    cin >> minutes;
   
    while (minutes < 0 || minutes > 59)
    {
        cout << "Minutes must be within the range 0 - 59.  Please try again." << endl << "Minutes: ";
        cin >> minutes;
    };
    
    cout << "Seconds: ";
    cin >> seconds;
   
    while (seconds < 0 || seconds > 59)
    {
        cout << "Seconds must be within the range 0 - 59.  Please try again." << endl << "Seconds: ";
        cin >> seconds;
    };

    string output = "";
    
    if (hours == 1)
    	output += to_string(hours) += " Hour, ";
    else
    	output += to_string(hours) += " Hours, ";
    
    if (minutes == 1)
    	output += to_string(minutes) += " Minute and ";
    else
    	output += to_string(minutes) += " Minutes and ";
    
    if (seconds == 1)
    	output += to_string(seconds) += " Second = ";
    else
    	output += to_string(seconds) += " Seconds = ";
    
    output += to_string(calculateSeconds(hours, minutes, seconds)) += " seconds.";

    cout << output << endl;
    
    return 0;
}

int calculateSeconds(int hours, int minutes, int seconds)
{
    return (360 * hours) + (60 * minutes) + seconds;
}
