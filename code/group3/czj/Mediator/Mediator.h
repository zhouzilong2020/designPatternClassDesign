#include<iostream>
#include<cstring>
using namespace std;




class User {
private:
   string name;
 
public:
   string getName() {
      return name;
   }
 
    void setName(string Name) {
        name = Name;
   }
 
   User(string Name){
      name  = Name;
   }
 
   void sendMessage(string message){
      ChatRoom.showMessage(this,message);
   }
};

class ChatRoom {
public:
    void static showMessage(User* user, string message){
      cout<<user->getName()<<" "<<message;
   }
};