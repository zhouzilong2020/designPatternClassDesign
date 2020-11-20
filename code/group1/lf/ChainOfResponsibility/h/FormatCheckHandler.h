#pragma once
#include"BaseCheckHandler.h"

//格式审核处理器类
class FormatCheckHandler : public BaseCheckHandler {
public:
	bool canPassCheck(const MonkeyLanguageForm& form);
};