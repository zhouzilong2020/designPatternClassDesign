#include"../h/DogLanguageAdapter.h"

/**
 * @brief: 犬语适配器构造函数，将犬语转化成猴语
 * @param: formInDogLanguage是犬语表格
 * @ret:   无
 */
DogLanguageAdapter::DogLanguageAdapter(const DogLanguageForm & formInDogLanguage) {
	cout << "DogLanguageForm:"+formInDogLanguage.toString() << endl;
	formData = translateToMonkeyLanguage(formInDogLanguage.getFormData());
}

/**
 * @brief: 犬语到猴语翻译的函数
 * @param: data是鸟语表格的数据
 * @ret:   翻译后的猴语数据
 */
vector<MonkeyLanguage> DogLanguageAdapter::translateToMonkeyLanguage(const vector<DogLanguage>& data){
	vector<MonkeyLanguage> dataInMonkeyLanguage = { "lss","male","20" };
	return dataInMonkeyLanguage;
}
