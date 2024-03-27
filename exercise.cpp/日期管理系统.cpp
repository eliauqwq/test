#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//日期管理系统
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);//构造函数初始化成员并判断是否合法
	int GetDay(int year, int month) const;//返回该年该月的天数用于判断是否合法
	void Print() const;//打印函数
	void Check() const;//单独的检查函数

	 void Change();//复制函数
	 Date& operator=(Date& d);//自定义拷贝构造函数，引用返回减少拷贝

	 bool operator==(Date& d);//判断日期是否相等
	 void operator+=(int n);//日期加天数
	 void operator-=(int n);//日期减天数
	 int  operator-( Date& d);//日期减日期
	 void PrintWeekday();//计算星期几

private:
	int _year;
	int _month;
	int _day;//成员私密化封装
	string  Joruney;
};

inline int Date::GetDay(int year,int month) const
{
	 int DayArr[13] = {
		0,31,28,31,30,31,30,31,31,30,31,30,31
	};
	int day = DayArr[month];
	if (month ==2
		&& ((year % 4 == 0 && year % 100 != 0)
		|| (year % 400 == 0))) {
		day++;
	}
	return day;
}

Date::Date(int year, int month, int day)
{
	this->_year = year;
	this->_month = month;
	this->_day = day;

	//判断日期是否合法
	if (!((_year >= 0)
		&& (_month > 0 && _month)
		&& (_day > 0 && _day <= GetDay(_year, _month)))
		) {
		cout << "非法日期:" << endl;
	}
	this->Print();
}

inline void Date::Print() const
{
	printf("%d-%d-%d\n", _year, _month, _day);
}

inline void Date::Check() const
{
	if (!((_year >= 0)
		&& (_month > 0 && _month)
		&& (_day > 0 && _day <= GetDay(_year, _month)))
		) {
		cout << "非法日期:" << endl;
	}
	this->Print();
}

Date& Date::operator=(Date& d)
{
	if (this != &d) {
		this->_year = d._year;
		this->_month = d._month;
		this->_day = d._day;
	}
	return *this;
}

void Date::Change()
{
	int y, m, d;
	cin >> y >> m >> d;
	Date S(y, m, d);
	*this = S;
}

void Date::operator+=(int n)
{
	this->_day += n;
	while (this->_day > GetDay(this->_year, this->_month))
	{
		this->_day -= GetDay(this->_year, this->_month);
		this->_month++;

		while (this->_month > 12)
		{
			this->_month = 1;
			this->_year++;
		}
	}
}

void Date::operator-=(int n)
{
	this->_day -= n;
	while (this->_day <=0)
	{
		this->_month--;
		if (this->_month <= 0)
		{
			this->_year--;
			this->_month += 12;
		}
		this->_day += GetDay(this->_year, this->_month);
	}
}

bool Date::operator==(Date& d)
{
	if ((this->_year == d._year)
		&& (this->_month == d._month)
		&& (this->_day == d._day))
		return true;
	return false;
}


int Date::operator-( Date& d)
{
	int count=0;
	while (!(*this == d))
	{
		d += 1;
		count++;
	}
	return count;
}

void Date::PrintWeekday() 
{
	const char* week[] = { "周一","周二","周三","周四","周五","周六","周日" };
	Date Start(1900, 1, 1);
	int num = *this - Start;
	cout << week[num % 7] << endl;
}

int main()
{
	Date Man(2024, 3, 23);
	Man.PrintWeekday();
}