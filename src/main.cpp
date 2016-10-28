#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    cout << "Please enter a length of time:" << endl;
    
    int hours = getInputFromUser("Hours", calculateMaxHours());
    int minutes = getInputFromUser("Minutes", 59);
    int seconds = getInputFromUser("Seconds", 59);

    cout << formatOuput(hours, minutes, seconds) << endl;
    
    return 0;
}
