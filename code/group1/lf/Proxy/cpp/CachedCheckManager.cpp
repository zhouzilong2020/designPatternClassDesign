#include "..\h\CachedCheckManager.h"

/**
 * @brief: 带缓存的审核管理器类构造函数
 * @param: checkManagerCore是对应审核管理器核心的指针
 * @ret:   无
 */
CachedCheckManager::CachedCheckManager(ICheckManager* checkManagerCore) {
	this->checkManagerCore = checkManagerCore;
}

/**
 * @brief: 设置审核管理器核心的审核处理器
 * @param: checkHandler是审核处理器指针
 * @ret:   无
 */
void CachedCheckManager::setCheckHandler(ICheckHandler * checkHandler) {
	checkManagerCore->setCheckHandler(checkHandler);
}

/**
 * @brief: 获取审核结果，如果已在缓存中，则直接返回，否则调用审核管理器核心的方法，并储存结果
 * @param: registerForm是注册表格
 * @ret:   是否通过审核
 */
bool CachedCheckManager::getCheckResult(const RegisterForm& registerForm) {
	bool result;
	RegisterForm* p =const_cast<RegisterForm*>(&registerForm);
	if (checkResult.find(p)==checkResult.end()) {
		result = checkManagerCore->getCheckResult(registerForm);
		checkResult[p] = result;
	}
	else {
		result = checkResult[p];
	}
	return result;
}
