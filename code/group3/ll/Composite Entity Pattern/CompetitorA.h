#pragma once
#include<string>
#include<iostream>
using namespace std;

namespace Entity {
	class CompetitorA
	{
	public:
		/**
	   * @brief: ���ø�ʵ������Ϣ��������
	   * @param: �����������ַ���
	   * @ret: ������ֵ
	   */
		void setInfo(string name);
		/**
	   * @brief: �õ���ʵ������Ϣ��������
	   * @param: ���������
	   * @ret: �����������ַ�����
	   */
		string getInfo();
	private:
		string name;
	};
}


