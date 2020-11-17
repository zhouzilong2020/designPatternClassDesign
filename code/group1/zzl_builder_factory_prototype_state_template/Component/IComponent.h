#ifndef I_COMPONENT
#define I_COMPONENT

#include "config/ComponentType.h"


/**
 * Interface
 * 场馆内部件的接口，实现了prototype
 */
class IComponent {

protected:
    /// 部件的种类
    ComponentType _componentType;
    /// 部件的id
    int _id;

    /**
     * 部件的构造函数
     * @param componentType 传入一个枚举形变量
     * @param 部件的id
     */
    IComponent(ComponentType componentType, int id) : _componentType(componentType), _id(id) {};

public:
    /// 虚函数，展示该部件的信息，需要concrete class实现
    virtual void showInfo() = 0;

    /// 虚函数，该部件的具体功能，需要concrete class实现
    virtual void doSomething() = 0;

    /// 虚函数，克隆该部件，为prototype必要接口，需要concrete class实现
    virtual IComponent *clone() = 0;
};

#endif