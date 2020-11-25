#include <iostream>
#include "Mediator.h"
namespace Mediator
{
    void User::sendMessage(string message)
    {
        ChatRoom::showMessage(this, message);
    }

    void run()
    {
        //create user
        User *tiger = new User("Tiger");
        User *lion = new User("Lion");
        //communicate in chatroom
        tiger->sendMessage("Hi! Lion!");
        lion->sendMessage("Hello! Tiger!");
        tiger->sendMessage("How do you think of the running competition?");
        lion->sendMessage("It is the most exciting game ever!");
    }
} // namespace Mediator