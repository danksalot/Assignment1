# Duration Converter

# Assignment:
Write a program that asks the user to enter a time duration in hours, minutes, and seconds and then displays the time in terms of seconds in decimal format. There are 60 minutes in an hour, and there are 60 seconds in a minute. Represent these number of minutes in an hours and number of seconds in a minute as constant in your program. You should use a separate variable for each input value.

Please make sure that minutes and seconds are less than or equal to 59. If the users enter this more than 59 or negative it should be asking him to re-enter the information. 

A sample run should look like this (user input is in bold):

Enter hours, minutes, and seconds:

First, enter the hours: **10**

Next, enter the minutes: **30**

Finally, enter the seconds: **30**

10 hours, 30 minutes, 30 seconds = 37830 seconds

#Solution
I used the to_string() method to append integers to a string, so C++11 is required.

Units are still displayed in the output if 0 is entered, but the program does adjust the output to display singular units when there is only one:
*  0 Hours
*  1 Hour
*  3 Hours
  
