#ifndef I_SEAT
#define I_SEAT

#include "config/ComponentType.h"
#include "IComponent.h"
#include "config/SeatType.h"
#include <string>
#include <iostream>

/**
 * Interface
 * 继承自IComponent，为椅子部件的抽象类
 */
class ISeat : public IComponent {
protected:
    /// 椅子的种类
    SeatType _seatType;

    /**
     * 椅子接口的构造方法
     * @param seatType 椅子种类
     * @param id 部件的id
     */
    ISeat(SeatType seatType, int id) : IComponent(ComponentType::Seat, id), _seatType(seatType) {};

public:
    /**
     * 展示椅子相关信息
     */
    virtual void showInfo() override {
        std::cout << "ComponentType:" << this->_componentType << " Style:" << this->_seatType << " No." << this->_id
                  << std::endl;
    };

    /**
     * 椅子的主要功能为让人坐，不同的椅子有不一样的方法，不如木条椅子可以直接坐
     * 折叠椅需要先把椅子打开
     */
    virtual void doSomething() override {
        seat();
    };

    /// 坐下
    virtual void seat() = 0;

};

#endif