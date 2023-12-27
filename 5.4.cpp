#include<iostream>
using namespace std;
class student 
{
private:		//在私有成员中定义学号和得分
	int ID ;
	int score ;
public:
	student(int a, int b) {
		ID = a;//用构造函数给学号和得分赋值
		score = b;
	};
	~student() {}//析构函数
	static void max(student* p)//传入对象指针
	{
		int maxscore,maxID;
		for (int i = 0; i < 5; i++)
		{
			maxscore = p[i].score > p[i + 1].score ? p[i].score: p[i + 1].score;
		}//求最高分
			for (int i = 0; i < 5; i++)
			{
				if (maxscore == p[i].score)
				{
					maxID = p[i].ID;
				}
			}//求最高分的学号
			cout << maxID << endl;//输出最高分的学号
	}
		
	
};

int main()
{
	student i[5] = { 
		student (1,5),
		student (2,6),
		student (3,8),
		student (4,7),
		student (5,9)
	};//定义对象数组
	student::max(i);//用静态函数并传入对象数组首地址
	

}