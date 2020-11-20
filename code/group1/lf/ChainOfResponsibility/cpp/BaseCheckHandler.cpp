#include"../h/BaseCheckHandler.h"
/**
 * @brief: 设置下一个要执行的审核处理器
 * @param: checkHandler是指向下一个要执行的审核处理器的指针
 * @ret:   无
 */
void BaseCheckHandler::setNext(ICheckHandler* checkHandler) {
	nextCheckHandler = checkHandler;
}

/**
 * @brief: 判断能否通过当前审核，如果能，则在存在下一个审核处理器的情况下执行下一个审核
 * @param: MonkeyLanguage是英语表格
 * @ret:   无
 */
bool BaseCheckHandler::doCheck(const MonkeyLanguageForm& form) {
	if (canPassCheck(form)) {
		if (nextCheckHandler != NULL) {
			cout << "To do next check ..." << endl;
			nextCheckHandler->doCheck(form);
		}
		else {
			cout << "Check finished ..." << endl;
			return true;
		}
	}
	else {
		cout << "Check failed ..." << endl;
		return false;
	}
}