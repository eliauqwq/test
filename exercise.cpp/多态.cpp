#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*多态是一种同名函数在不同类别里有不同操作的行为
要实现多态必须满足以下要求：
1.必须做到三同（函数名相同、参数相同、返回值相同）
2.必须是父类的指针或引用类型调用函数
*/
//设计一个买票系统，使得普通人，学生（五折），军人（免费）。
class Person
{
public:
	Person(const char* name)
		:_name(name){}//这是一种用构造函数初始化成员的方法
	virtual void Buy()
	{
		cout << _name <<' : ' << "成人票 全款" << endl;
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
		cout << _name <<' : '<< "学生票 半折" << endl;
	}
};

class Soldier :public Person
{
public:
	Soldier(const char* name)
		:Person(name){}
	virtual void Buy()
	{
		cout << _name <<' : ' << "军人 免票" << endl;
	}
};

void Pay(Person* ptr)//只有父类的指针或引用类型才能成功调用多态
{
	ptr->Buy();
	delete ptr;
}

void Menu()
{
	printf("****************************\n");
	printf("*******自助购票系统**********\n");
	printf("*请根据您的需要购买合适类型的票\n");
	printf("**1.成人票**2.学生票**3.军人票\n");
	printf("*****若退出请按功能键0********\n");
	printf("*****************************\n");
}

void Log(string n)
{
	cout << "请输入你的姓名" << endl;
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