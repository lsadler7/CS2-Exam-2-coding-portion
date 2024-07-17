#pragma once
class date
{
private:
	int day;
	int month;
	int year;
public:
	date();
	date(int day, int month, int year);
	string getStringMonth(string month);
	string slashFormat(string slash) const; //MM/DD/YYYY
	void USFormat(string US); // Month DD, YYYY
	void nonUSFormat(string nonUS); // DD Month YYYY

	int integerDay(int d);
	int integerMonth(int m);
	int integerYear(int y);

	~date();


};

