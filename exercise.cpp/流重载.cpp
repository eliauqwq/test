#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*c++�У�����cout��ϵͳ�Զ���ostream���ͣ�ֻ���������������ʹ�ã��ﲻ�����Զ�����
���ʹ�õ�Ŀ�ģ���˶�����ٶ����Ϊ�鷳����ˣ����Բ��ö�<<�������������ʹ�ٶ����Ϊ���*/
using namespace std;
class Date
{
public:
	friend void operator<<(ostream& out, const Date& d);//���Զ���<<������Ϊ�����Ԫ����
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

 void operator>>(istream& in,  Date& d)//ע��������Ҫ�ı���ģ����ܼ�const;
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