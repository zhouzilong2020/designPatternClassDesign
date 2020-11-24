#include <iostream>
#include "Mediator.h"

void User::sendMessage(string message){
       ChatRoom::showMessage(this,message);
   }


int main(void)
{
    //create user
    User* tiger = new User("Tiger");
    User* lion = new User("Lion");
    //communicate in chatroom
    tiger->sendMessage("Hi! Lion!");
    lion->sendMessage("Hello! Tiger!");
    tiger->sendMessage("How do you think of the running competition?");
    lion->sendMessage("It is the most exciting game ever!");

}