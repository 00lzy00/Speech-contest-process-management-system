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
//����ݽ�������
class SpeechManager 
{
public:

	//���캯��
	SpeechManager();
	

	//�˵�����
	void show_Menu();

	//�˳�����
	void exitSystem();

	//��ʼ������������
	void initSpeech();

	//����
	void speechContest();


	//��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;

	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int> victory;

	//��ű���Լ���Ӧ����ѡ������
	map<int,Speaker>m_Speaker;

	//��������
	int m_Index ;

	//����12��ѡ��
	void createSpeaker();

	//��ʼ����  �����������̿���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ�����¼
	void showRecord();


	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;
	//��¼����
	map<int, vector<string>> m_Record;

	//����ļ�
	void clearRecord();
		

	//��������
	~SpeechManager();
	
	
};