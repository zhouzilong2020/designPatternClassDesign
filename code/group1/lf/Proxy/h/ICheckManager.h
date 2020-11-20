#pragma once
#include"../../ChainOfResponsibility/h/ICheckHandler.h"
#include"../../RegisterForm/h/RegisterForm.h"

//审核管理器接口类
class ICheckManager {
public:
	virtual void setCheckHandler(ICheckHandler* checkHandler)=0;
	virtual bool getCheckResult(const RegisterForm& registerForm)=0;
};