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
    Fruit *createFruit(string type) {
        if (type == "banana") {
            return new Banana;
        } else if (type == "apple") {
            return new Apple;
        } else {
            return NULL;
        }
    }
};


int main简单工厂() {
    FruitFactory *factory = new FruitFactory;
    Fruit *fruit = NULL;
    string type = "banana";
    fruit = factory->createFruit(type);
    fruit->showName();
    type = "apple";
    fruit = factory->createFruit(type);
    fruit->showName();
    delete fruit;
    delete factory;
    return 0;
}