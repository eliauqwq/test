//���캯��
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*1.����һ����ʱ��ϵͳ��Ĭ�ϸ���������һ�������ݵĹ��캯��
  2.���캯�����౻����ʱ����
  3.�޲εĹ��캯����ȫȱʡ���ȱʡ��ϵͳ�Զ����ɵĹ��캯��ͳ��Ĭ�Ϲ��캯������һ������ֻ��
  ����һ��Ĭ�Ϲ��캯��*/
class Time
{
public:

	Time(int year=2023,int month=7,int day=1)//���캯������ͬ��,ȫȱʡ���Ǻ��������Ѹ�Ĭ��ֵ
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