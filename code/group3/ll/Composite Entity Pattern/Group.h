#pragma once
#include "CompetitorA.h"
#include "CompetitorB.h"
#include<iostream>
using namespace std;


namespace Entity {
	class NameReturn
	{
	public:
		string namea;
		string nameb;
		/**
	   * @brief: ���ø�С�����Ϣ����������������
	   * @param: �����С��ÿ����Ա������
	   * @ret: �����ز���
	   */
		void setNames(string namea, string nameb);
	};

	class Group
	{
	public:
		/**
	   * @brief: ���ø�С�����Ϣ����������������
	   * @param: �����С��ÿ����Ա������
	   * @ret: �����ز���
	   */
		void setInfo(string namea, string nameb);
		/**
	   * @brief: �õ���ʵ������Ϣ��������
	   * @param: ���������
	   * @ret: �����������ַ�����
	   */
		NameReturn getInfo();
		Group();
	private:

		CompetitorA* A;
		CompetitorB* B;
		NameReturn* result;
	};
}


