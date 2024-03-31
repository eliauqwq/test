#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*c++中，由于cout是系统自定义ostream类型，只能与内置类型配合使用，达不到与自定义类
配合使用的目的，因此对类的再定义较为麻烦。因此，可以采用对<<运算符的重载来使再定义更为简便*/
using namespace std;
class Date
{
public:
	friend void operator<<(ostream& out, const Date& d);//将自定义<<函数定为类的友元函数
	friend void operator>>(istream& in,  Date& d);
	Date(int year,int month,int day)
		:_year(year),_month(month),_day(day){}

private:
	int _year;
	int _month;
	int _day;
};

 void operator<<(ostream& out, const Date& d)
{
	 out << d._year << '-' << d._month << '-' << d._day << "\n";
}

 void operator>>(istream& in,  Date& d)//注意这里是要改变类的，不能加const;
 {
	 in >> d._year >> d. _month >> d._day;
 }

 int main()
 {
	 Date d(2005, 7, 1);
	 cout << d;
	 cin >> d;
	 cout << d;
 }