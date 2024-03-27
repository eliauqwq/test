#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//���ڹ���ϵͳ
class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);//���캯����ʼ����Ա���ж��Ƿ�Ϸ�
	int GetDay(int year, int month) const;//���ظ�����µ����������ж��Ƿ�Ϸ�
	void Print() const;//��ӡ����
	void Check() const;//�����ļ�麯��

	 void Change();//���ƺ���
	 Date& operator=(Date& d);//�Զ��忽�����캯�������÷��ؼ��ٿ���

	 bool operator==(Date& d);//�ж������Ƿ����
	 void operator+=(int n);//���ڼ�����
	 void operator-=(int n);//���ڼ�����
	 int  operator-( Date& d);//���ڼ�����
	 void PrintWeekday();//�������ڼ�

private:
	int _year;
	int _month;
	int _day;//��Ա˽�ܻ���װ
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

	//�ж������Ƿ�Ϸ�
	if (!((_year >= 0)
		&& (_month > 0 && _month)
		&& (_day > 0 && _day <= GetDay(_year, _month)))
		) {
		cout << "�Ƿ�����:" << endl;
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
		cout << "�Ƿ�����:" << endl;
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
	const char* week[] = { "��һ","�ܶ�","����","����","����","����","����" };
	Date Start(1900, 1, 1);
	int num = *this - Start;
	cout << week[num % 7] << endl;
}

int main()
{
	Date Man(2024, 3, 23);
	Man.PrintWeekday();
}