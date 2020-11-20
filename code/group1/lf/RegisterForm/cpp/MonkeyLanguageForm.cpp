#include"../h/MonkeyLanguageForm.h"

const vector<MonkeyLanguage> MonkeyLanguageForm::formHeader = { "Name","Gender","Age" };

/**
 * @brief: 猴语表格构造函数，调用父类带参构造函数
 * @param: data是猴语表格数据
 * @ret:   无
 */
MonkeyLanguageForm::MonkeyLanguageForm(const vector<MonkeyLanguage>& data)
	:RegisterForm(data) {}

/**
 * @brief: 获取猴语表格表头
 * @param: 无
 * @ret:   返回猴语表格表头
 */
vector<MonkeyLanguage> MonkeyLanguageForm::getFormHeader()  const {
	return MonkeyLanguageForm::formHeader;
}