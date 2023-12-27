#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void shuru()
	{
		cout << "小时:";
		cin >> hour;      //输入设定的时间 
		cout << "分钟:";
		cin >> minute;
		cout << "秒:";
		cin >> sec;
	}
	void shuchu()
	{
		cout << hour << ":" << minute << ":" << sec << endl;//输出设定的时间
	}
};
	int main()
	{
		Time t1;
		//定义t1为Time类对象
		t1.shuru();
		t1.shuchu();
			
		
		return 0;
	}
