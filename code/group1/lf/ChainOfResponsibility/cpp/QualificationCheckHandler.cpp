#include"../h/QualificationCheckHandler.h"

/**
 * @brief: 判断是否能通过资质审核
 * @param: MonkeyLanguage是英语表格
 * @ret:   是否通过资质审核
 */
bool QualificationCheckHandler::canPassCheck(const MonkeyLanguageForm& form) {
	cout << "Doing qualification check in " + form.toString() << endl;
	return true;
}