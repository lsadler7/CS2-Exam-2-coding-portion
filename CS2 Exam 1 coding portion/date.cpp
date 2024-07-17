#include "date.h"
#include <iostream>
#include <string>

using namespace std;

/*Design a class called Date.  
The class should store a date in three integers: month, day, and year.  
There should be member functions to print the date in the following formats:
12/15/2018
December 25, 2018
25 December 2018

Include two constructors.  
The default constructor should set the date to January 1, 2000.  
The other constructor should take a day, month, and year as integer parameters.
Also include a destructor.

Demonstrate the class by writing a complete program implementing it.  
Create two dates and print them out using each of the three ways.
*/

date::date() : day(1), month(1), year(2000)
{

}
date::date(int day, int month, int year)
{

}
date::~date()
{
}
string date::slashFormat(string slash) const //MM/DD/YYYY
{
	slash = integerMonth + "/" + integerDay + "/" + integerYear;
	return slash;
}
void date::USFormat(string US) // Month DD, YYYY
{
	US = getStringMonth + " " + integerDay + ", " + integerYear;
}
void date::nonUSFormat(string nonUS) // DD Month YYYY
{
	nonUS = integerDay + " " + getStringMonth + " " + integerYear;
}

int date::integerDay(int d) {
	day = d;
}

int date::integerMonth(int m) {
	month = m;
}

int date::integerYear(int y) {
	year = y;
}



string date::getStringMonth(string month)
{
	date month[] = { date("January"), date("February"),date("March"), date("April"), date("May"), date("June"),
		date("July"), date("August"), date("September"), date("October"), date("November"), date("December")
	};


}
