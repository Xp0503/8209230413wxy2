#include<iostream>
using namespace std;
class chang
{
private:	//��˽�г�Ա�ж��峤����ĳ����
	int length;
	int width;
	int height;
public:
	void set()//�������峤��߸�ֵ
	{
		cout << "������ĳ�Ϊ��";
		cin>>length;
		
		cout << "�������Ϊ��";
		cin>>width;
		
		cout << "������ĸ�Ϊ��";
		cin>>height;
		
	}
	void v()//���㲢�������������
	{ 
		cout << "���������Ϊ:" << length * width * height << endl;
		cout << endl;
	}
};
int main()
{
	chang a;
	a.set();
	a.v();
	chang b;
	b.set();
	b.v();
	chang c;
	c.set();
	c.v();
	return 0;

}