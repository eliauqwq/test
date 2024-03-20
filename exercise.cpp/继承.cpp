#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*继承是一种可以在一个公共基础类上不断扩展，并达到节省空间的做法。比如说当我们需要存储学校
师生的信息时，多次在老师类、学生类中定义名字、性别、年龄等师生共有特质时，会导致代码的冗长，
也不利于代码的可读性，真正区分他们的只不过是教师编号和学生号。在这种情况下利用继承便可以使代
码大大简化，也便于维护。
*/
using namespace std;
class Person
{
public:
	string _name;
	string _age;
	string _sex;
	static string from;//小明是吉大，其他人也应为吉大人
};//将所有扩展类的所需定义相同实体定义在公共父类当中
string Person::from = "jlu";
class Student:public Person//继承方式为继承方式+继承父类
{
public:
	string _stuid;
};
/*需要注意的是
1.在父类中protected范围中的实体是能被子类继承的，然而private范围无法被继承
2.继承方式也有protected、private等，但继承下来的实体也只能在子类中使用，泛用性不高。
*/

int main()
{
	Student ming;
	Student hong;
	ming._name = "xiaoming";//可以看到，在父类中的实体_name可以被子类正常使用
	ming._sex = "male";
	ming._age = "114";
//++++++++++++++++++++++++++++++++++++++++++
	cout << hong.from << endl;
	ming.from = "peking";//改变小明的学校，小红的学校也会改变
	cout << hong.from << endl;
//++++++++++++++++++++++++++++++++++++++++++
	Person p;
	p = ming;//父类可以被子类赋值，赋值过后相同实体的值相同
	cout << p._name << ' ' << p._sex << ' ' << p._age << endl;
}
