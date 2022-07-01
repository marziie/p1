using namespace std;

class Date
{
public:
	int year;
	int month;
	int day;

	Date(int year, int month, int day);

	Date(string s);

	friend ostream& operator<<(ostream& os, Date const& d)
	{
		return os << d.year << '/' << d.month << '/' << d.day << '\n';
	}

};

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(string s)
{

	// throw string("the date is not valid")
}
