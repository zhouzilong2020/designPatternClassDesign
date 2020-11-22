//
// Created by iMbaGong on 2020/11/13.
//

#ifndef VISITOR_COMMAND_H
#define VISITOR_COMMAND_H
class Command{
public:
    virtual ~Command()= default;
    virtual void execute()=0;

protected:
    Command()= default;
};


#endif //VISITOR_COMMAND_H
