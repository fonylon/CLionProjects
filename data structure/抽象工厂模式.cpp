//
// Created by 风林 on 2017/10/29.
//

#include <iostream>

using namespace std;


class Fridge {
public:
    virtual void freeze() = 0;

    virtual ~Fridge() {}
};

class Television {
public:
    virtual void play() = 0;

    virtual ~Television() {}
};

class HaierFridge : public Fridge {
public:

    virtual void freeze() {
        cout << "HaierFridge freeze..." << endl;
    }

};

class MideaFridge : public Fridge {
public:

    virtual void freeze() {
        cout << "MideaFridge freeze..." << endl;
    }
};

class HaierTelevision : public Television {
public:

    virtual void play() {
        cout << "HaierTelevision play..." << endl;
    }

};

class MideaTelevision : public Television {
public:

    virtual void play() {
        cout << "MideaTelevision play..." << endl;
    }
};

class AbstractFactory {
public:
    virtual Fridge *createFridge() = 0;

    virtual Television *createTelevision() = 0;

    virtual ~AbstractFactory() {};
};

class HaierFactory : public AbstractFactory {
public:
    virtual Fridge *createFridge() {
        return new HaierFridge;
    }

    virtual Television *createTelevision() {
        return new HaierTelevision;
    }
};

class MideaFactory : public AbstractFactory {
public:
    virtual Fridge *createFridge() {
        return new MideaFridge;
    }

    virtual Television *createTelevision() {
        return new MideaTelevision;
    }
};


int main抽象工厂() {
    AbstractFactory *factory = NULL;
    Fridge *fridge = NULL;
    Television *television = NULL;
    factory = new HaierFactory;
    fridge = factory->createFridge();
    fridge->freeze();
    television = factory->createTelevision();
    television->play();
    factory = new MideaFactory;
    fridge = factory->createFridge();
    fridge->freeze();
    television = factory->createTelevision();
    television->play();
    delete television;
    delete fridge;
    delete factory;
    return 0;
}