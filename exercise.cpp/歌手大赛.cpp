#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Singer
{
public:
	friend void operator>>(istream& in, Singer& a);//运算符重载输入
	friend ostream&  operator<<(ostream& out, Singer& a);//运算符重载输出
	int  operator>(Singer& a);//运算符重载比大小
	void operator=(Singer& a);//运算符重载赋值
	double Getavarage()
	{
		return (_score1 + _score2 + _score3) / 3;
	}//计算平均分
	double Avarage = Getavarage();
	static int Num;
	void GetNum()
	{
		int m = Num;
		cout << m << endl;
	}//打印总人数

private:
	int _num;//编号
	string _name;//名字
	double _score1;//一号评委打分
	double _score2;//二号评委打分
	double _score3;//三号评委打分
};

int Singer:: Num = 0;

void operator>>(istream& in, Singer& a)
{
	cin >> a._num;
	cin >> a._name;
	cin >> a._score1;
	cin >> a._score2;
	cin >> a._score3;
}

ostream & operator<<(ostream& out, Singer& a)
{
	cout <<" 编号: "<< a._num;
	cout <<" 名字: "<< a._name;
	cout << " 一号打分; "<<a._score1;
	cout <<" 二号打分: "<< a._score2;
	cout << " 三号打分: "<<a._score3;
	cout << " 平均分: "<<a.Getavarage();
	return out;
}

int Singer::operator>(Singer& a)
{
	if (this->Getavarage() > a.Getavarage())
	{
		return 1;
	}
	else {
		return -1;
	}
}

void Singer:: operator=(Singer& a)
{
	this->_num = a._num;
	this->_name = a._name;
	this->_score1 = a._score1;
	this->_score2 = a._score2;
	this->_score3 = a._score3;
}

Singer & PrintHigest(Singer *a,int n)//打印最高分
{	
	cout << "最高分数选手属性如下:"<<"\n";
	Singer* Higest = a;
	for (int i = 0; i < n; i++)
	{
		if (*a > *Higest == 1) {
			Higest = a;
		}
		a++;
	}
	return *Higest;
}

Singer& PrintLowest(Singer* a, int n)//打印最低分
{
	cout << "最低分数选手属性如下:" << "\n";
	Singer* Lowest = a;
	for (int i = 0; i < n; i++)
	{
		if (*a > *Lowest == -1)
		{
			Lowest = a;
			a++;
		}
	}
	return *Lowest;
} 

Singer& Print_All(Singer* a, int n)//将歌手数据以平均分从高到低的顺序打印歌手信息
{	
	Singer tmp;
	int count;
	for (int i = 0; i < n - 1; i++)
	{	
		count = 0;
		for (int j = 0; j < n - 1-i; j++)
		{
			if (*(a + j) > *(a + j + 1) == 1)
			{
				tmp = *(a + j + 1);
				*(a + j + 1) = *(a + j);
				*(a + j) = tmp;
				count=1;
			}

		}
		if (count == 0)
			break;
	}

	return *a;
}

int main()
{
	int n;
	cout << "输入参赛人数: " << endl;
	cin >> n;
	Singer::Num = n;
	Singer* Player = new Singer[n];
	for (int i = 0; i < n; i++)
	{	
		cout << "请输入选手的信息:" << endl;
		cin >> *(Player+i);
	}
	Print_All(Player, n);
	for (int i = 0; i < n; i++)
	{
		cout << *(Player+i) << endl;
	}
	delete[] Player;
}