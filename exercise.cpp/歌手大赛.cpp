#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Singer
{
public:
	friend void operator>>(istream& in, Singer& a);//�������������
	friend ostream&  operator<<(ostream& out, Singer& a);//������������
	int  operator>(Singer& a);//��������رȴ�С
	void operator=(Singer& a);//��������ظ�ֵ
	double Getavarage()
	{
		return (_score1 + _score2 + _score3) / 3;
	}//����ƽ����
	double Avarage = Getavarage();
	static int Num;
	void GetNum()
	{
		int m = Num;
		cout << m << endl;
	}//��ӡ������

private:
	int _num;//���
	string _name;//����
	double _score1;//һ����ί���
	double _score2;//������ί���
	double _score3;//������ί���
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
	cout <<" ���: "<< a._num;
	cout <<" ����: "<< a._name;
	cout << " һ�Ŵ��; "<<a._score1;
	cout <<" ���Ŵ��: "<< a._score2;
	cout << " ���Ŵ��: "<<a._score3;
	cout << " ƽ����: "<<a.Getavarage();
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

Singer & PrintHigest(Singer *a,int n)//��ӡ��߷�
{	
	cout << "��߷���ѡ����������:"<<"\n";
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

Singer& PrintLowest(Singer* a, int n)//��ӡ��ͷ�
{
	cout << "��ͷ���ѡ����������:" << "\n";
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

Singer& Print_All(Singer* a, int n)//������������ƽ���ִӸߵ��͵�˳���ӡ������Ϣ
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
	cout << "�����������: " << endl;
	cin >> n;
	Singer::Num = n;
	Singer* Player = new Singer[n];
	for (int i = 0; i < n; i++)
	{	
		cout << "������ѡ�ֵ���Ϣ:" << endl;
		cin >> *(Player+i);
	}
	Print_All(Player, n);
	for (int i = 0; i < n; i++)
	{
		cout << *(Player+i) << endl;
	}
	delete[] Player;
}