#include"../h/RegisterForm.h"

/**
 * @brief: 表格构造函数
 * @param: data是表格数据
 * @ret:   无
 */
RegisterForm::RegisterForm(const vector<string>& data){
	formData = data;
}

/**
 * @brief: 填写表格
 * @param: data是表格数据
 * @ret:   无
 */
void RegisterForm::fillForm(const vector<string>& data) {
	formData = data;
}

/**
 * @brief: 获取表格数据
 * @param: 无
 * @ret:   表格数据
 */
vector<string> RegisterForm::getFormData() const {
	return formData;
}

/**
 * @brief: 表格内容转化成字符串
 * @param: 无
 * @ret:   表格内容的字符串
 */
string RegisterForm::toString() const{
	vector<string> formHeader = getFormHeader();
	string str= "{"+ formHeader[0] + ":" + formData[0];
	for (int i = 1; i < formHeader.size(); i++) {
		str += ","+ formHeader[i] + ":" + formData[i];
	}
	str += "}";
	return str;
}
