#include <climits>
#include <iostream>
#include "functions.h"

using namespace std;

int calculateMaxHours()
{
    // We don't want to overflow the integer that holds the total seconds at the end
    // So we'll assume that the user will enter the max minutes (59 * 60 seconds) and the max seconds (59)
    // Then we'll return the max whole hours the user can enter without overflow.
    
    int maxSecondsThatWeCanDevoteToHours = INT_MAX - (59 * 60) - 59;
    return maxSecondsThatWeCanDevoteToHours / 360;
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
