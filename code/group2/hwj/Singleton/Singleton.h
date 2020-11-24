#pragma once
#include <iostream>
using namespace std;

//����ģʽģ����
template<typename T>
class Singleton {
public:
    static T& get_instance() {
        static T instance;
        return instance;
    }
    virtual ~Singleton() {}
    Singleton(const Singleton&) = delete;
    Singleton& operator =(const Singleton&) = delete;
protected:
    Singleton() {}
};