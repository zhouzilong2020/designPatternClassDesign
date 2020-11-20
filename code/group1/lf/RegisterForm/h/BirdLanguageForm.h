#pragma once
#include"RegisterForm.h"
typedef string BirdLanguage;
class BirdLanguageForm :public RegisterForm {
public:
	BirdLanguageForm() {};
	BirdLanguageForm(const vector<BirdLanguage>& data);
	vector<BirdLanguage> getFormHeader() const;
	static const vector<BirdLanguage> formHeader;  //表格的表头
};