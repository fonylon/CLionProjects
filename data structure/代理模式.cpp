//
// Created by 风林 on 2017/11/1.
//

#include <iostream>

using namespace std;

//业务接口
class Subject {
    virtual void doSomething() = 0;
};

//被代理的类
class RealSubject : public Subject {
public:
    void doSomething() override {
        cout << "RealSubject doSomething" << endl;
    }
};

//代理类
class ProxySubject : public Subject {
public:
    ProxySubject(RealSubject *realSubject) : realSubject(realSubject) {}

    void doSomething() override {
        this->realSubject->doSomething();
        cout << "ProxySubject doSomething" << endl;
    }

private:
    //依赖被代理的类
    RealSubject *realSubject;
};

int main代理() {
    RealSubject *realSubject = new RealSubject;
    ProxySubject *proxySubject = new ProxySubject(realSubject);
    proxySubject->doSomething();
    return 0;
}