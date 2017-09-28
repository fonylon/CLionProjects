//
// Created by 风林 on 2017/9/28.
//

#include <iostream>

class Parent {
public:
    int func() {
        return 0;
    }

    int func(int a) {
        return a;
    }

    virtual int func(int a, int b) {
        return a + b;
    }
};

class Child : public Parent {
public:
    virtual int func(int a, int b) {
        return a * b;
    }
};

using namespace std;

int main0603() {

    Child child;
    cout << child.func(1, 2) << endl;
    return 0;
}