#include"../h/BirdLanguageAdapter.h"

/**
 * @brief: 鸟语适配器构造函数，将鸟语转化成猴语
 * @param: formInBirdLanguage是鸟语表格
 * @ret:   无
 */
BirdLanguageAdapter::BirdLanguageAdapter(const BirdLanguageForm & formInBirdLanguage) {
	cout << "BirdLanguageForm:"+formInBirdLanguage.toString() << endl;
	formData = translateToMonkeyLanguage(formInBirdLanguage.getFormData());
}

/**
 * @brief: 鸟语到猴语翻译的函数
 * @param: data是鸟语表格的数据
 * @ret:   翻译后的猴语数据
 */
vector<MonkeyLanguage> BirdLanguageAdapter::translateToMonkeyLanguage(const vector<BirdLanguage>& data) {
	vector<MonkeyLanguage> dataInMonkeyLanguage = { "lss","male","20" };
	return dataInMonkeyLanguage;
}

