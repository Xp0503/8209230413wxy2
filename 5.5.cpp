#include<iostream>
using namespace std;
class Point
{
private://在私有成员定义x，y
	int x;
	int y;
public:
	Point(int a=60, int b=80)//用构造函数初始化x，y
	{
		x = a;
		y = b;
	}
	~Point() {};//析构函数
	void setPoint(int i, int j)//修改坐标
	{
		x = x + i;
		y = y + j;
	}
	void display()//输出坐标
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point A;
	A.setPoint(20, 30);//修改坐标
	A.display();//输出坐标
}