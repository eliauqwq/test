#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*�̳���һ�ֿ�����һ�������������ϲ�����չ�����ﵽ��ʡ�ռ������������˵��������Ҫ�洢ѧУ
ʦ������Ϣʱ���������ʦ�ࡢѧ�����ж������֡��Ա������ʦ����������ʱ���ᵼ�´�����߳���
Ҳ�����ڴ���Ŀɶ��ԣ������������ǵ�ֻ�����ǽ�ʦ��ź�ѧ���š���������������ü̳б����ʹ��
����򻯣�Ҳ����ά����
*/
using namespace std;
class Person
{
public:
	string _name;
	string _age;
	string _sex;
	static string from;//С���Ǽ���������ҲӦΪ������
};//��������չ������趨����ͬʵ�嶨���ڹ������൱��
string Person::from = "jlu";
class Student:public Person//�̳з�ʽΪ�̳з�ʽ+�̳и���
{
public:
	string _stuid;
};
/*��Ҫע�����
1.�ڸ�����protected��Χ�е�ʵ�����ܱ�����̳еģ�Ȼ��private��Χ�޷����̳�
2.�̳з�ʽҲ��protected��private�ȣ����̳�������ʵ��Ҳֻ����������ʹ�ã������Բ��ߡ�
*/

int main()
{
	Student ming;
	Student hong;
	ming._name = "xiaoming";//���Կ������ڸ����е�ʵ��_name���Ա���������ʹ��
	ming._sex = "male";
	ming._age = "114";
//++++++++++++++++++++++++++++++++++++++++++
	cout << hong.from << endl;
	ming.from = "peking";//�ı�С����ѧУ��С���ѧУҲ��ı�
	cout << hong.from << endl;
//++++++++++++++++++++++++++++++++++++++++++
	Person p;
	p = ming;//������Ա����ำֵ����ֵ������ͬʵ���ֵ��ͬ
	cout << p._name << ' ' << p._sex << ' ' << p._age << endl;
}
