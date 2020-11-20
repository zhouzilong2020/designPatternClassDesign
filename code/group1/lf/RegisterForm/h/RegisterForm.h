#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class RegisterForm {
public:
	RegisterForm() {};
	RegisterForm(const vector<string>& data);
	void fillForm(const vector<string>& data);
	vector<string> getFormData() const;
	virtual vector<string> getFormHeader() const = 0;
	string toString() const;
protected:
	vector<string> formData;
};
