#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Time
{
private:
	int hour = 0, minute = 0, second = 0;
public:
	int h = 0, m = 0, s = 0;
	void set();
	void plus();
	void minus();
	void printf();
};

inline void Time::set() {//׷�Ӷ�����������
	cout << "��������Ҫ���õ�ʱ �� ��" << endl;
	cin >> h >> m >> s;
	hour = h;
	minute = m;
	second = s;
}

inline void Time::plus() {
	cout << "��������Ҫ�ӵ�ʱ �� ��" << endl;
	cin >> h >> m >> s;
	hour += h;
	minute += m;
	second += s;
	if (second >=60)
	{
		second -= 60;
		minute++;
	}
	if (minute >=60)
	{
		minute -= 60;
		hour++;
	}
	while (hour >=24)
	{
		hour -= 24;
	}
}

inline void Time::minus()
{
	cout << "��������Ҫ����ʱ �� ��" << endl;
	cin >> h >> m >> s;
	hour -= h;
	minute -= m;
	second -= s;
	if (second < 0)
	{
		minute--;
		second += 60;
	}
	if (minute < 0)
	{
		hour--;
		minute += 60;
	}
	if (hour < 0)
	{
		hour += 24;
	}
}

inline void Time:: printf()
{
	cout << hour << "ʱ" << minute << "��" << second << "��" << endl;
}

void menu()
{
	cout << "***********************" << endl;
	cout << "*********ѡ�����*******" << endl;
	cout << "*****1.����    2.��*****" << endl;
	cout << "*****3.��      4.��ӡ***" << endl;
	cout << "*****0.�˳��˵�*********" << endl;
}

enum Operation
{
	SET = 1,
	PLUS,
	MINUS,
	PRINTF,
	EXIT = 0
};

int main()
{
	Time t;
	int state =EXIT;
	do
	{
		menu();
		cin >> state;
		switch (state)
		{
		case SET:
			t.set();
			break;
		case PLUS:
			t.plus();
			break;
		case MINUS:
			t.minus();
			break;
		case PRINTF:
			t.printf();
			break;
		case EXIT:
			state = EXIT;
			break;
		default:
			break;
		}
	} while (state);
}
