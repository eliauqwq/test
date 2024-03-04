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
	printf("\n");
	//下面进行链表的插入
	//在一个长度大于等于一的链表的第i个位置和第i+1个位置插入一个链表、
	p = head;//首先仍将p的位置移动到头节点
	Node* pre = (Node*)malloc(sizeof(Node));//设置要插入的节点；
	printf("请输入要插入的数据：");
	scanf("%d", &pre->data);//导入要插入的数据
	int m;
	printf("请输入要插入的位置：");
	scanf("%d", &m);
	for (int i = 0; i < m - 1; i++) {
		p = p->next;//将p移动到第i个结点
	}
	Node* q;//创建一个过渡节点，来储存第i+1个节点
	q = p->next;
	p->next = pre;//将插入节点插到第i个节点之后
	pre->next = q;//将第i+1个节点插到插入节点之后
	p = head;//接下来将链表打印出来检验是否插入成功
	while (p->next != NULL)//判断p的下一节点是否为NULL，若不为NULL，说明节点还没有结束
	{
		printf("%d", p->next->data);
		p = p->next;//p节点向后移动
	}
	return 0;
}

