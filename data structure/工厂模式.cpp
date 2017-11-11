//
// Created by 风林 on 2017/10/29.
//

#include <iostream>

using namespace std;

class Fruit {
public:
    virtual void showName() = 0;

    virtual  ~Fruit() {};
};

class Banana : public Fruit {
public:
    void showName() {
        cout << "I am banana" << endl;
    }

    ~Banana() {}
};

class Apple : public Fruit {
public:
    void showName() {
        cout << "I am apple" << endl;
    }

    ~Apple() {}
};

//工厂
class FruitFactory {
public:
    virtual Fruit *createFruit() = 0;
    virtual ~FruitFactory(){}
};

class BananaFactory : public FruitFactory {
public:
    Fruit *createFruit() {
        return new Banana;
    }
};

class AppleFactory : public FruitFactory {
public:
    Fruit *createFruit() {
        return new Apple;
    }
};

int main工厂() {
    FruitFactory *factory = NULL;
    Fruit *fruit = NULL;
    factory = new BananaFactory;
    fruit = factory->createFruit();
    fruit->showName();
    factory = new AppleFactory;
    fruit = factory->createFruit();
    fruit->showName();
    delete fruit;
    delete factory;
    return 0;
}