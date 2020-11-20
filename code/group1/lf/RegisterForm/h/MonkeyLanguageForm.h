#pragma once
#include"RegisterForm.h"
typedef string MonkeyLanguage;
class MonkeyLanguageForm : public RegisterForm {
public:
	MonkeyLanguageForm() {};
	MonkeyLanguageForm(const vector<MonkeyLanguage>& data);
	vector<MonkeyLanguage> getFormHeader() const;
	static const vector<MonkeyLanguage> formHeader;  //表格的表头
};
