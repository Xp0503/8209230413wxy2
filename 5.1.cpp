#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void shuru()
	{
		cout << "Сʱ:";
		cin >> hour;      //�����趨��ʱ�� 
		cout << "����:";
		cin >> minute;
		cout << "��:";
		cin >> sec;
	}
	void shuchu()
	{
		cout << hour << ":" << minute << ":" << sec << endl;//����趨��ʱ��
	}
};
	int main()
	{
		Time t1;
		//����t1ΪTime�����
		t1.shuru();
		t1.shuchu();
			
		
		return 0;
	}
