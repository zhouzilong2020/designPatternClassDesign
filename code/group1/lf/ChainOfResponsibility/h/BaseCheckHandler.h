#pragma once
#include"ICheckHandler.h"
//实现了审核处理器链式处理的抽象类
class BaseCheckHandler : public ICheckHandler {
public:
	void setNext(ICheckHandler *checkHandler) final;
	bool doCheck(const MonkeyLanguageForm& form) final;
	virtual bool canPassCheck(const MonkeyLanguageForm& form) = 0;
private:
	ICheckHandler * nextCheckHandler;  //下一个审核处理器指针
};