#pragma once
#include<iostream>
#include <string>

using namespace std;

namespace Composite {
	class Component
	{
	private:


	public:
		Component() {};
		string name;

		/**
		 * @brief:向数组中增加新的对象
		 * @param: 传递进一个Component的对象指针
		 * @ret: 不返回值
		 */
		virtual void add(Component* Comp) = 0;

		/**
		 * @brief: 按名字搜索目标对象， 并将该对象从数组中删除，其余对象自动补位
		 * @param: 传递进入需要删去的对象的名字
		 * @ret: 不返回值
		 */
		virtual void remove(string name) = 0;

		/**
		* @brief: 将该对象的关键信息（如名称，年龄等）在屏幕上打印
		* @param: 不需要参数传递
		* @ret: 不返回值
		*/
		virtual void getChild() = 0;

		/**
		* @brief: 得到该对象的名称
		* @param: 不需要参数传递
		* @ret: 返回该对象的名称
		*/
		virtual string getName() = 0;
	};
}


