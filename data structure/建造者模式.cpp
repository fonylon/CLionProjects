//
// Created by 风林 on 2017/10/30.
//

#include <iostream>

using namespace std;


//产品类
class Computer {
public:
    void addCpu(string cpu) {
        this->cpu = cpu;
        cout << "安装" << cpu << "cpu" << endl;
    }

    void addDisk(string disk) {
        this->disk = disk;
        cout << "安装" << disk << "disk" << endl;
    }

    void addMemory(string memory) {
        this->memory = memory;
        cout << "安装" << memory << "memory" << endl;
    }

    void print() {
        cout << "电脑组装：" << this->cpu << "cpu，" << this->disk << "disk，" << this->memory << "memory" << endl;
    }

private:
    string cpu;
    string disk;
    string memory;
};

//抽象建造者类
class Builder {
public:
    virtual void build() = 0;

    virtual Computer *getProduct() = 0;
};

class LenovoBuilder : public Builder {
public:

    virtual void build() {
        this->computer = new Computer;
        computer->addCpu("Lenovo");
        computer->addDisk("Lenovo");
        computer->addMemory("Lenovo");
    }

    virtual Computer *getProduct() {
        return this->computer;
    }

    ~LenovoBuilder() {
        delete this->computer;
    }

private:
    Computer *computer;
};


class ASUSBuilder : public Builder {
public:

    virtual void build() {
        this->computer = new Computer;
        computer->addCpu("ASUS");
        computer->addDisk("ASUS");
        computer->addMemory("ASUS");
    }

    virtual Computer *getProduct() {
        return this->computer;
    }

    ~ASUSBuilder() {
        delete this->computer;
    }

private:
    Computer *computer;
};

//调用者
class Director {
public:
    Director(Builder *builder) {
        this->builder = builder;
    }

    Computer *getProduct() {
        this->builder->build();
        return this->builder->getProduct();
    }

private:
    Builder *builder;
};


int main建造者() {
    LenovoBuilder *lenovoBuilder = new LenovoBuilder;
    ASUSBuilder *asusBuilder = new ASUSBuilder;
    Director *director = new Director(lenovoBuilder);
    Computer *computer = director->getProduct();
    computer->print();
    director = new Director(asusBuilder);
    computer = director->getProduct();
    computer->print();
    return 0;
}