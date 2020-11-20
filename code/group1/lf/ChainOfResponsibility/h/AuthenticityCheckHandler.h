#pragma once
#include"BaseCheckHandler.h"

//真实性审核处理器类
class AuthenticityCheckHandler : public BaseCheckHandler {
public:
	bool canPassCheck(const MonkeyLanguageForm& form);
};
