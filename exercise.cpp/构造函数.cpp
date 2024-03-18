//构造函数
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*1.定义一个类时，系统会默认给我们生成一个无内容的构造函数
  2.构造函数在类被定义时调用
  3.无参的构造函数、全缺省或半缺省、系统自动生成的构造函数统称默认构造函数，在一个类中只能
  存在一个默认构造函数*/
class Time
{
public:

	Time(int year=2023,int month=7,int day=1)//构造函数和类同名,全缺省就是函数参数已给默认值
	{
		_year = year;
		_month = month;
		_day = day;
		cout << _year << ' ' << _month << ' ' << _day << endl;
	}
private:
	int _year = 0;
	int _month = 0;
	int _day = 0;
};

int main()
{
	Time t1(2005, 7, 1);
	Time t2(2003);

}