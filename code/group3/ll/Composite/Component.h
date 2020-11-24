#pragma once
#include<iostream>
#include <string>

using namespace std;

class Component
{
private:


public:
	Component() {};
	string name;

/**
 * @brief:�������������µĶ���
 * @param: ���ݽ�һ��Component�Ķ���ָ��
 * @ret: ������ֵ
 */
	virtual void add(Component* Comp)=0 ;

/**
 * @brief: ����������Ŀ����� �����ö����������ɾ������������Զ���λ
 * @param: ���ݽ�����Ҫɾȥ�Ķ��������
 * @ret: ������ֵ
 */
	virtual void remove(string name)=0;

/**
* @brief: ���ö���Ĺؼ���Ϣ�������ƣ�����ȣ�����Ļ�ϴ�ӡ
* @param: ����Ҫ��������
* @ret: ������ֵ
*/
	virtual void getChild()=0;

/**
* @brief: �õ��ö��������
* @param: ����Ҫ��������
* @ret: ���ظö��������
*/
	virtual string getName() = 0;
};

