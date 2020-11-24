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
	   * @brief: 设置该小组的信息（两个或多个姓名）
	   * @param: 传入该小组每个组员的姓名
	   * @ret: 不返回参数
	   */
		void setNames(string namea, string nameb);
	};

	class Group
	{
	public:
		/**
	   * @brief: 设置该小组的信息（两个或多个姓名）
	   * @param: 传入该小组每个组员的姓名
	   * @ret: 不返回参数
	   */
		void setInfo(string namea, string nameb);
		/**
	   * @brief: 得到该实例的信息（姓名）
	   * @param: 不传入参数
	   * @ret: 返回姓名（字符串）
	   */
		NameReturn getInfo();
		Group();
	private:

		CompetitorA* A;
		CompetitorB* B;
		NameReturn* result;
	};
}


