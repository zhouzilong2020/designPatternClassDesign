#pragma once
#include "Event.h"
#include "setGroup.h"

namespace Bridge {
	class Soccer :public Event
	{
	public:
		Soccer(setGroup* Gender);
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


