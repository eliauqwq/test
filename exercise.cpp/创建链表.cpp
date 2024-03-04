#include<stdlib.h>//包含malloc函数
#include<stdio.h>
typedef struct node {//定义结构体
	int data;//数据域，保存数据
	struct node* next;//指针域，保存下一节点
}Node;
int main() {
	Node* head = (Node*)malloc(sizeof(Node));//创建头节点，并分配内存
	head->next = NULL;//初始化头节点指针
	Node* p;//创建可活动节点P
	p = head;//p节点指针赋值为头节点
	int n;//设置所需链表节点的个数
	printf("请输入链表长度：");
	scanf("%d", &n);
	printf("输入数据：");
	for (int i = 0; i < n; i++) {//循环创建结点
		Node* s = (Node*)malloc(sizeof(Node));//创建s节点，分配内存
		scanf("%d", &s->data);//为节点S存储数据
		p->next = s;//使S节点与p节点相连
		s->next = NULL;//记得将最后的节点初始化为NULL
		p = s;//保证可活动节点P一直处于链表最后处
	}
//至此，链表已经完成，但需注意，头节点内的数据域是不含数据的
	p = head;//将可活动节点p移动到头节点，准备开始卸货
	while (p->next != NULL)//判断p的下一节点是否为NULL，若不为NULL，说明节点还没有结束
	{
		printf("%d", p->next->data);
		p = p->next;//p节点向后移动
	}

	return 0;
}

