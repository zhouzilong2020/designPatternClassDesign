#pragma once
#include"RegisterForm.h"
typedef string DogLanguage;
class DogLanguageForm :public RegisterForm {
public:
	DogLanguageForm() {};
	DogLanguageForm(const vector<DogLanguage>& data);
	vector<DogLanguage> getFormHeader() const;
	static const vector<DogLanguage> formHeader;  //表格的表头
};