#include <iostream>

using namespace std;

int getInputFromUser(string, int);
int calculateSeconds(int, int, int);
string formatOuput(int, int, int);

int main()
{
    cout << "Please enter a length of time:" << endl;
    
    int hours = getInputFromUser("Hours", 9999);
    int minutes = getInputFromUser("Minutes", 59);
    int seconds = getInputFromUser("Seconds", 59);

    cout << formatOuput(hours, minutes, seconds) << endl;
    
    return 0;
}

int getInputFromUser(string unit, int max)
{
    int input;
    
    cout << unit << ": ";
    cin >> input;
    
    while(input < 0 || input > max)
    {
        cout << unit << " must be within the range 0 - " << to_string(max) << ".  Please try again." << endl << unit << ": ";
        cin >> input;
    }
    
    return input;
}

int calculateSeconds(int hours, int minutes, int seconds)
{
    return (360 * hours) + (60 * minutes) + seconds;
}

string formatOuput(int hours, int minutes, int seconds)
{
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

    return output;
}
