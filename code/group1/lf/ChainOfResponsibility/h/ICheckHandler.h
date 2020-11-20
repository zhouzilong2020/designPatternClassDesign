#pragma once
#include<string>
#include<iostream>
#include"../../RegisterForm/h/MonkeyLanguageForm.h"
using namespace std;

//审核处理器的接口类
class ICheckHandler {
public:
	virtual void setNext(ICheckHandler* checkHandler) = 0;
	virtual bool doCheck(const MonkeyLanguageForm& form) = 0;
};