#include"../h/CheckManagerCore.h"

/**
 * @brief: 设置审核处理器
 * @param: checkHandler是审核处理器的指针
 * @ret:   无
 */
void CheckManagerCore::setCheckHandler(ICheckHandler * checkHandler) {
	this->checkHandler = checkHandler;
}

/**
 * @brief: 获取审核结果
 * @param: registerForm是注册表各
 * @ret:   是否通过审核
 */
bool CheckManagerCore::getCheckResult(const RegisterForm& registerForm) {
	string formType = typeid(registerForm).name();
	if (formType == "class MonkeyLanguageForm") {
		return checkHandler->doCheck(dynamic_cast<const MonkeyLanguageForm&>(registerForm));
	}
	else if (formType == "class BirdLanguageForm") {
		return checkHandler->doCheck(BirdLanguageAdapter(dynamic_cast<const BirdLanguageForm&>(registerForm)));
	}
	else if (formType == "class DogLanguageForm") {
		return checkHandler->doCheck(DogLanguageAdapter(dynamic_cast<const DogLanguageForm&>(registerForm)));
	}
	return false;
}
