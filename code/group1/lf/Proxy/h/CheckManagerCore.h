#pragma once
#include"ICheckManager.h"
#include"../../Adapter/h/BirdLanguageAdapter.h"
#include"../../Adapter/h/DogLanguageAdapter.h"

//审核管理器核心类
class CheckManagerCore :public ICheckManager {
public:
	void setCheckHandler(ICheckHandler* checkHandler);
	bool getCheckResult(const RegisterForm& registerForm);
private:
	ICheckHandler* checkHandler;  //审核处理器的指针
};