#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*��̬��һ��ͬ�������ڲ�ͬ������в�ͬ��������Ϊ
Ҫʵ�ֶ�̬������������Ҫ��
1.����������ͬ����������ͬ��������ͬ������ֵ��ͬ��
2.�����Ǹ����ָ����������͵��ú���
*/
//���һ����Ʊϵͳ��ʹ����ͨ�ˣ�ѧ�������ۣ������ˣ���ѣ���
class Person
{
public:
	Person(const char* name)
		:_name(name){}//����һ���ù��캯����ʼ����Ա�ķ���
	virtual void Buy()
	{
		cout << _name <<' : ' << "����Ʊ ȫ��" << endl;
	}
protected:
	string _name;
};

class Student :public Person
{
public:
	Student(const char*name)
		:Person(name){}
	virtual void Buy()
	{
		cout << _name <<' : '<< "ѧ��Ʊ ����" << endl;
	}
};

class Soldier :public Person
{
public:
	Soldier(const char* name)
		:Person(name){}
	virtual void Buy()
	{
		cout << _name <<' : ' << "���� ��Ʊ" << endl;
	}
};

void Pay(Person* ptr)//ֻ�и����ָ����������Ͳ��ܳɹ����ö�̬
{
	ptr->Buy();
	delete ptr;
}

void Menu()
{
	printf("****************************\n");
	printf("*******������Ʊϵͳ**********\n");
	printf("*�����������Ҫ����������͵�Ʊ\n");
	printf("**1.����Ʊ**2.ѧ��Ʊ**3.����Ʊ\n");
	printf("*****���˳��밴���ܼ�0********\n");
	printf("*****************************\n");
}

void Log(string n)
{
	cout << "�������������" << endl;
	cin >> n;
}

enum Kind
{
	EXIT=0,_person,_student,_soldier
};



int main()
{
	int state = EXIT;
	string name;
	do {
		Menu();
		cin >> state;
		switch (state)
		{
		case _person:
			Log(name);
			Pay(new Person(name.c_str()));
			break;
		case _student:
			Log(name);
			Pay(new Student(name.c_str()));
			break;
		case _soldier:
			Log(name);
			Pay(new Soldier(name.c_str()));
			break;
		case EXIT:
			break;
		default:
			break;
		}


	} while (state != 0);
}