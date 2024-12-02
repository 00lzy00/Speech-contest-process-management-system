#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include<map>
#include"speaker.h"
#include<algorithm> 
#include<deque>
#include<vector>
#include<numeric>
#include<fstream>
//设计演讲管理类
class SpeechManager 
{
public:

	//构造函数
	SpeechManager();
	

	//菜单功能
	void show_Menu();

	//退出功能
	void exitSystem();

	//初始化容器和属性
	void initSpeech();

	//比赛
	void speechContest();


	//成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;

	//第一轮晋级选手编号容器
	vector<int>v2;

	//胜出前三名选手编号容器
	vector<int> victory;

	//存放编号以及对应具体选手容器
	map<int,Speaker>m_Speaker;

	//比赛轮数
	int m_Index ;

	//创建12名选手
	void createSpeaker();

	//开始比赛  比赛整个流程控制
	void startSpeech();

	//抽签
	void speechDraw();

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示往届记录
	void showRecord();


	//判断文件是否为空
	bool fileIsEmpty;
	//记录容器
	map<int, vector<string>> m_Record;

	//清空文件
	void clearRecord();
		

	//析构函数
	~SpeechManager();
	
	
};