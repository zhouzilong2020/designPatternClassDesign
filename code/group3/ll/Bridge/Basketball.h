#pragma once
#include "Event.h"
#include "setGroup.h"


namespace Bridge {
	class Basketball :public Event
	{
	public:
		Basketball(setGroup* Gender);
		/**
		 * @brief:���øñ����������Ϣ
		 * @param: �����ݲ���
		 * @ret: ������ֵ
		 */
		void setGender();
	private:
		setGroup* Gender;
	};
}


