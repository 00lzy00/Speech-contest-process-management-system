#include<iostream>
#include"speechManager.h"
using namespace std;
#include<vector>
#include<algorithm> 


int main()
{
	srand((unsigned int)time(NULL));
	//�������������
	SpeechManager sm;  //����һ�ζ��� ֻ������һ�ι��캯��

	int choice = 0; //�����洢�û���ѡ��
	//����12��ѡ�ִ���
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{

		cout << "ѡ�ֱ�� ��" << it->first << "������ " << (*it).second.m_Name << "������"<<(*it).second.m_Score[0] << endl;

	}*/
	while (true) 
    {   
		sm.show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
				break;
		case 2://�鿴���������¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls");//����
			break;

		}

	}


	system("pause");
	return 0;
}