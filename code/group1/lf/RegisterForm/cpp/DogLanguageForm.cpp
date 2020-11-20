#include"../h/DogLanguageForm.h"
const vector<DogLanguage> DogLanguageForm::formHeader = { "Nombre","Género","Edad" };

/**
 * @brief: 犬语表格构造函数
 * @param: data是犬语表格数据
 * @ret:   无
 */
DogLanguageForm::DogLanguageForm(const vector<DogLanguage>& data)
	:RegisterForm(data) {}

/**
 * @brief: 获取犬语表格表头
 * @param: 无
 * @ret:   返回犬语表格表头
 */
vector<DogLanguage> DogLanguageForm::getFormHeader()  const {
	return DogLanguageForm::formHeader;
}
