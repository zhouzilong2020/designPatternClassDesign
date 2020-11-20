#include"../h/BirdLanguageForm.h"

const vector<BirdLanguage> BirdLanguageForm::formHeader = { "姓名","性别","年龄" };

/**
 * @brief: 鸟语表格构造函数，调用父类带参构造函数
 * @param: data是鸟语表格数据
 * @ret:   无
 */
BirdLanguageForm::BirdLanguageForm(const vector<BirdLanguage>& data)
	:RegisterForm(data) {}

/**
 * @brief: 获取鸟语表格表头
 * @param: 无
 * @ret:   返回鸟语表格表头
 */
vector<BirdLanguage> BirdLanguageForm::getFormHeader() const {
	return BirdLanguageForm::formHeader;
}
