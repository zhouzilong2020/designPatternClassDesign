#pragma once
#include"GroupControler.h"

namespace Entity {
	class Client
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
	   * @ret: �����ز�����������Ļ�ϴ�ӡ��С���Ա����
	   */
		void printInfo();
		Client();
	private:
		GroupControler* controler;

	};
}


