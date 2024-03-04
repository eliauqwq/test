#include<iostream>
using namespace std;
class Player {//创建一个类 
public://类具有可见性，默认情况下只有类中的函数能够访问类中的数据，用public使该类全局可见
	int x , y ;//设置角色位置 
	int speed;//设置角色速度 
	void Move(int xa, int ya) {//类中可以包含函数，这些函数特称为方法 
		x += xa * speed;
		y += ya * speed;
	}
};

int main() {
	Player player;//定义一个类
		player.speed = 3;
		player.x = 0;
	player.y = 0;//初始化角色的位置,速度 
	player.Move(1, 3);//在主函数中调用类中的方法时，需要加上所属类的前缀
		cout << showpos << player.x << ' ' << player.y << endl;
}
