//
// Created by 风林 on 2017/11/4.
//
#include <iostream>

using namespace std;

//目标接口
class TargetInterface {
public:
    virtual void func() = 0;
};

class ConcreteTarget {
public:
    void doAction() {
        cout << "target" << endl;
    }
};

//适配器类继承目标接口，并在实现方法中执行目标类中的代码
class Adapter : public TargetInterface {
private:
    ConcreteTarget *concrete;
public:
    Adapter(ConcreteTarget *concrete) : concrete(concrete) {}

    void func() override {
        this->concrete->doAction();
    }
};

void action(TargetInterface *targetInterface) {
    targetInterface->func();
}


int main适配器() {

    ConcreteTarget *concrete = new ConcreteTarget;
    TargetInterface *targetInterface = new Adapter(concrete);
    action(targetInterface);
    return 0;
}