#pragma once
#include"../../RegisterForm/h/MonkeyLanguageForm.h"
#include"../../RegisterForm/h/BirdLanguageForm.h"

//鸟语适配器类
class BirdLanguageAdapter :public MonkeyLanguageForm {
public:
	BirdLanguageAdapter(const BirdLanguageForm& formInBirdLanguage);
private:
	vector<MonkeyLanguage> translateToMonkeyLanguage(const vector<BirdLanguage>& data);
};