#pragma once
#include<string>
#include<iostream>
using namespace std;

namespace Entity {
	class CompetitorA
	{
	public:
		/**
	   * @brief: 设置该实例的信息（姓名）
	   * @param: 传入姓名的字符串
	   * @ret: 不返回值
	   */
		void setInfo(string name);
		/**
	   * @brief: 得到该实例的信息（姓名）
	   * @param: 不传入参数
	   * @ret: 返回姓名（字符串）
	   */
		string getInfo();
	private:
		string name;
	};
}


