#include<iostream>
using namespace std;
class Player {//����һ���� 
public://����пɼ��ԣ�Ĭ�������ֻ�����еĺ����ܹ��������е����ݣ���publicʹ����ȫ�ֿɼ�
	int x , y ;//���ý�ɫλ�� 
	int speed;//���ý�ɫ�ٶ� 
	void Move(int xa, int ya) {//���п��԰�����������Щ�����س�Ϊ���� 
		x += xa * speed;
		y += ya * speed;
	}
};

int main() {
	Player player;//����һ����
		player.speed = 3;
		player.x = 0;
	player.y = 0;//��ʼ����ɫ��λ��,�ٶ� 
	player.Move(1, 3);//���������е������еķ���ʱ����Ҫ�����������ǰ׺
		cout << showpos << player.x << ' ' << player.y << endl;
}
