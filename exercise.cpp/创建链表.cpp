#include<stdlib.h>//����malloc����
#include<stdio.h>
typedef struct node {//����ṹ��
	int data;//�����򣬱�������
	struct node* next;//ָ���򣬱�����һ�ڵ�
}Node;
int main() {
	Node* head = (Node*)malloc(sizeof(Node));//����ͷ�ڵ㣬�������ڴ�
	head->next = NULL;//��ʼ��ͷ�ڵ�ָ��
	Node* p;//�����ɻ�ڵ�P
	p = head;//p�ڵ�ָ�븳ֵΪͷ�ڵ�
	int n;//������������ڵ�ĸ���
	printf("�����������ȣ�");
	scanf("%d", &n);
	printf("�������ݣ�");
	for (int i = 0; i < n; i++) {//ѭ���������
		Node* s = (Node*)malloc(sizeof(Node));//����s�ڵ㣬�����ڴ�
		scanf("%d", &s->data);//Ϊ�ڵ�S�洢����
		p->next = s;//ʹS�ڵ���p�ڵ�����
		s->next = NULL;//�ǵý����Ľڵ��ʼ��ΪNULL
		p = s;//��֤�ɻ�ڵ�Pһֱ�����������
	}
//���ˣ������Ѿ���ɣ�����ע�⣬ͷ�ڵ��ڵ��������ǲ������ݵ�
	p = head;//���ɻ�ڵ�p�ƶ���ͷ�ڵ㣬׼����ʼж��
	while (p->next != NULL)//�ж�p����һ�ڵ��Ƿ�ΪNULL������ΪNULL��˵���ڵ㻹û�н���
	{
		printf("%d", p->next->data);
		p = p->next;//p�ڵ�����ƶ�
	}

	return 0;
}

