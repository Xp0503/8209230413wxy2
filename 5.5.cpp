#include<iostream>
using namespace std;
class Point
{
private://��˽�г�Ա����x��y
	int x;
	int y;
public:
	Point(int a=60, int b=80)//�ù��캯����ʼ��x��y
	{
		x = a;
		y = b;
	}
	~Point() {};//��������
	void setPoint(int i, int j)//�޸�����
	{
		x = x + i;
		y = y + j;
	}
	void display()//�������
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point A;
	A.setPoint(20, 30);//�޸�����
	A.display();//�������
}