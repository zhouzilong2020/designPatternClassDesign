#pragma once
#include "Group.h"


namespace Entity {
	class GroupControler
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
		GroupControler();
	private:
		Group* group;
	};
}


