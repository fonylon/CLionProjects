//
// Created by 风林 on 2017/11/3.
//

#include <iostream>

using namespace std;

class Engine {
public:
    virtual int speed() = 0;
};

class CarEngine : public Engine {
public:
    int speed() override {
        return 120;
    }

    void print() {
        cout << "CarEngine的速度为：" << this->speed() << endl;
    }
};

class TrainEngine : public Engine {
public:
    TrainEngine(CarEngine *carEngine) : carEngine(carEngine) {}

    int speed() override {
        return 3 * this->carEngine->speed();
    }

    void print() {
        cout << "TrainEngine的速度为：" << this->speed() << endl;
    }

private:
    CarEngine *carEngine;
};

int main装饰() {
    CarEngine *car = new CarEngine;
    TrainEngine *train = new TrainEngine(car);
    car->print();
    train->print();

    return 0;
}