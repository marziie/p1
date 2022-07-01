using namespace std;

class Date
{
public:
	int year;
	int month;
	int day;

	Date(int year, int month, int day);

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
