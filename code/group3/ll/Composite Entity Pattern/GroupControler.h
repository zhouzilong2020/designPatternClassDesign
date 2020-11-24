#pragma once
#include "Group.h"


namespace Entity {
	class GroupControler
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
		GroupControler();
	private:
		Group* group;
	};
}


