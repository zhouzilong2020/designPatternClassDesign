#pragma once
#include "Event.h"
#include "setGroup.h"


namespace Bridge {
	class Basketball :public Event
	{
	public:
		Basketball(setGroup* Gender);
		/**
		 * @brief:设置该比赛的组别信息
		 * @param: 不传递参数
		 * @ret: 不返回值
		 */
		void setGender();
	private:
		setGroup* Gender;
	};
}


