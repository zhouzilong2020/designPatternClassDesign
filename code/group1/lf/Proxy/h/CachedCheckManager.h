#pragma once
#include<unordered_map>
#include"ICheckManager.h"
#include"CheckManagerCore.h"

//带缓存的审核管理器类
class CachedCheckManager :public ICheckManager {
public:
	CachedCheckManager(ICheckManager* checkManagerCore);
	void setCheckHandler(ICheckHandler* checkHandler);
	bool getCheckResult(const RegisterForm& registerForm);
private:
	ICheckManager* checkManagerCore;  //审核管理器核心的指针
	unordered_map<RegisterForm*, bool> checkResult;  //缓存审核结果
};