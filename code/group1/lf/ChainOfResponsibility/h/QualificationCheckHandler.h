#pragma once
#include"BaseCheckHandler.h"

//资质审核处理器类
class QualificationCheckHandler : public BaseCheckHandler {
public:
	bool canPassCheck(const MonkeyLanguageForm& form);
};