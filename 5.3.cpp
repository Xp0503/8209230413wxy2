#include<iostream>
using namespace std;
class chang
{
private:	//在私有成员中定义长方体的长宽高
	int length;
	int width;
	int height;
public:
	void set()//给长方体长宽高赋值
	{
		cout << "长方体的长为：";
		cin>>length;
		
		cout << "长方体宽为：";
		cin>>width;
		
		cout << "长方体的高为：";
		cin>>height;
		
	}
	void v()//计算并输出长方体的体积
	{ 
		cout << "长方体体积为:" << length * width * height << endl;
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