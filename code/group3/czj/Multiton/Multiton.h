#include<iostream>
#include<vector>
#include<cstring>
using namespace std;


class Animal {
private:
    //maximum num of animal
    static const int maxNumberOfAnimal=10;
    static vector<string> AnimalInfoList;
    static vector<Animal> AnimalList;
    static int countNumOfAnimal;
    //private construction
    Animal() { 
    }
public:
    //init
    static void init(){
        for(int i=0;i<maxNumberOfAnimal;i++){   
            Animal instance;
            AnimalList.push_back(instance);  
        }
        AnimalInfoList.push_back("tiger");
        AnimalInfoList.push_back("lion");
        AnimalInfoList.push_back("rabbit");
        AnimalInfoList.push_back("bear");  
    }
    //create instance
    static Animal getInstance(int num){
		return AnimalList[num];
	}
	//get attribute
    static string getAttribute(int i){  
        return AnimalInfoList[i];  
    }  
};

vector<string> Animal::AnimalInfoList;
vector<Animal> Animal::AnimalList;


