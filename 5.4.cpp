#include<iostream>
using namespace std;
class student 
{
private:		//��˽�г�Ա�ж���ѧ�ź͵÷�
	int ID ;
	int score ;
public:
	student(int a, int b) {
		ID = a;//�ù��캯����ѧ�ź͵÷ָ�ֵ
		score = b;
	};
	~student() {}//��������
	static void max(student* p)//�������ָ��
	{
		int maxscore,maxID;
		for (int i = 0; i < 5; i++)
		{
			maxscore = p[i].score > p[i + 1].score ? p[i].score: p[i + 1].score;
		}//����߷�
			for (int i = 0; i < 5; i++)
			{
				if (maxscore == p[i].score)
				{
					maxID = p[i].ID;
				}
			}//����߷ֵ�ѧ��
			cout << maxID << endl;//�����߷ֵ�ѧ��
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
	};//�����������
	student::max(i);//�þ�̬������������������׵�ַ
	

}