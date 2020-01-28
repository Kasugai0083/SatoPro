#pragma once
class Date
{
public:
	Date() {};
	Date(int y, int m, int d) :
		year(y),
		month(m),
		day(d)
	{};
	~Date();

private:
	int year;
	int month;
	int day;

};

