#pragma once
#include"../../RegisterForm/h/MonkeyLanguageForm.h"
#include"../../RegisterForm/h/DogLanguageForm.h"

//犬语适配器类
class DogLanguageAdapter :public MonkeyLanguageForm {
public:
	DogLanguageAdapter(const DogLanguageForm& formInDogLanguage);
private:
	vector<MonkeyLanguage> translateToMonkeyLanguage(const vector<DogLanguage>& data);
};