#include<iostream>
#include"speechManager.h"
using namespace std;
#include<vector>
#include<algorithm> 


int main()
{
	srand((unsigned int)time(NULL));
	//创建管理类对象
	SpeechManager sm;  //创建一次对象 只调用了一次构造函数

	int choice = 0; //用来存储用户的选项
	//测试12名选手创建
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{

		cout << "选手编号 ：" << it->first << "姓名： " << (*it).second.m_Name << "分数："<<(*it).second.m_Score[0] << endl;

	}*/
	while (true) 
    {   
		sm.show_Menu();
		cout << "请输入您的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
				break;
		case 2://查看往届比赛记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");//清屏
			break;

		}

	}


	system("pause");
	return 0;
}