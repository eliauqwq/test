#define _CRT_SECURE_NO_WARNINGS
//c-������
#include <iostream>
using namespace std;
int main()
{
	char *s1 = (char*)"Hello ";//���ڲ�����const char*��char*ֱ�Ӹ�ֵ������ѡ��ǿ������ת��
	char* s2 = (char*)"123";
	char a[20];
	strcpy(a, s1);//���Ʋ���
	cout << (strcmp(a, s1) == 0 ? "" : "not ") << endl;//�Ƚ�
	cout << strcat(a, s2)<< endl;//����
	cout << _strrev(a) << endl;//����
	cout << _strset(a, 'c') << endl;//����
	cout << (strstr(s1, "ell") ? "" : "not ") <<"found" << endl;//���Ҵ�
	cout << (strchr(s1, 'c') ? "" : "not ") << "found" << endl;//�����ַ�
}