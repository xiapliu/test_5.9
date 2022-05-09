//猜数字游戏
#include<iostream>
using namespace std;
//time系统时间头文件包含
#include<ctime>
int main()
{
	//添加随机数的种子，作用是利用当前系统时间来生成随机数，防止每次都生成相同的随机数。
	srand((unsigned int)time(NULL));//这里的time没有包含头文件为什么能够执行呢？
	//1、系统生成随机数
	int num = rand() % 100 + 1;  //rand()%100 + 1 生成 0 +1 ~99+ 1 随机数
	//但是rand生成的是伪随机数
	//cout << num << endl;
	//2、玩家进行猜测
	cout << "请输入您猜测的数字,您有五次机会" << endl;
	int val = 0;//玩家输入数据
	int i = 1;
	while (i<6)
	{
		cin >> val;

		//3、判断玩家的猜测
		if (val > num)
		{
			cout << "您猜测的过大" << endl;
		}
		else if (val < num)
		{
			cout << "您猜测的过小" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			break;//可以退出当前的循环

		}
		i++;
		
	}
	//猜对   退出游戏
	//猜错   提示猜的结果过大或过小   重新返回第2步

	cout << "当前次数以用完" << endl;
	return 0;
}