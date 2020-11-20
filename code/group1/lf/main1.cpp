#include"ChainOfResponsibility/h/FormatCheckHandler.h"
#include"ChainOfResponsibility/h/QualificationCheckHandler.h"
#include"ChainOfResponsibility/h/AuthenticityCheckHandler.h"

#include"RegisterForm/h/MonkeyLanguageForm.h"
#include"RegisterForm/h/BirdLanguageForm.h"
#include"RegisterForm/h/DogLanguageForm.h"

#include"Adapter/h/BirdLanguageAdapter.h"
#include"Adapter/h/DogLanguageAdapter.h"

#include"Proxy/h/CachedCheckManager.h"
#include"Proxy/h/CheckManagerCore.h"
int main() {

	//初始化各审核处理器
	ICheckHandler* formatCheckHandler = new FormatCheckHandler();
	ICheckHandler* qualificationCheckHandler = new QualificationCheckHandler();
	ICheckHandler* authenticityCheckHandler = new AuthenticityCheckHandler();

	//创建审核处理器链
	formatCheckHandler->setNext(qualificationCheckHandler);
	qualificationCheckHandler->setNext(authenticityCheckHandler);

	ICheckManager* checkManagerCore = new CheckManagerCore();  //审核处理器核心
	ICheckManager* cacheCheckManager = new CachedCheckManager(checkManagerCore);  //带缓存审核处理器

	cacheCheckManager->setCheckHandler(formatCheckHandler); 

	//表格数据
	vector<string> dataInMonkeyLanguage = { "ShunshengLi","male","20" };
	vector<string> dataInBirdLanguage = { "李舜生","男","20" };
	vector<string> dataInDogLanguage = { "Sun-senLee ","hombre","20" };

	//初始化表格
	MonkeyLanguageForm formInMonkeyLanguage(dataInMonkeyLanguage);
	BirdLanguageForm formInBirdLanguage(dataInBirdLanguage);
	DogLanguageForm formInDogLanguage(dataInDogLanguage);

	cout << (cacheCheckManager->getCheckResult(formInMonkeyLanguage)?"passed":"failed")<< endl;
	cout << (cacheCheckManager->getCheckResult(formInBirdLanguage) ? "passed" : "failed") << endl;
	cout << (cacheCheckManager->getCheckResult(formInDogLanguage) ? "passed" : "failed") << endl;

	cout << (cacheCheckManager->getCheckResult(formInMonkeyLanguage) ? "passed" : "failed") << endl;
}