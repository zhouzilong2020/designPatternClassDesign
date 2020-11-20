#include"../h/AuthenticityCheckHandler.h"
/**
 * @brief: 判断是否能通过真实性审核
 * @param: MonkeyLanguage是英语表格
 * @ret:   是否通过真实性审核
 */
bool AuthenticityCheckHandler::canPassCheck(const MonkeyLanguageForm& form) {
	cout << "Doing authenticity check in "+form.toString() << endl;
	return true;
}