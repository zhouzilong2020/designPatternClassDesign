#include "Basketball.h"

namespace Bridge {
	Basketball::Basketball(setGroup* Gender)
	{
		this->Gender = Gender;
	}


	void Basketball::setGender()
	{
		cout << "You successed in setting the group of this basketball match!" << endl;
		Gender->getGroup();
		cout << endl;
	}
}
