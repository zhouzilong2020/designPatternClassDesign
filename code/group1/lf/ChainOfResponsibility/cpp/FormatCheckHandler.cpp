#include"../h/FormatCheckHandler.h"
/**
 * @brief: 判断是否能通过格式审核
 * @param: MonkeyLanguage是英语表格
 * @ret:   是否通过格式审核
 */
bool FormatCheckHandler::canPassCheck(const MonkeyLanguageForm& form) {
	cout << "Doing format check in " + form.toString() << endl;
	return true;
}