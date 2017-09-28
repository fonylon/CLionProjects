//
// Created by 风林 on 2017/9/23.
//

#include <iostream>

class Parent {
private:
    int a;
    int b;
public:

    Parent(int a) : a(a) {
    }

    Parent(int a, int b) : a(a), b(b) {
    }

public:
    int getA() const {
        return a;
    }

    void setA(int a) {
        Parent::a = a;
    }

    int getB() const {
        return b;
    }

    void setB(int b) {
        Parent::b = b;
    }

};


class Child : public Parent {
private:
    int c;
public:

    Child():Parent(3,5),c(7){}

    Child(int a, int b, int c) : Parent(a, b), c(c) {
    }

    int getC() const {
        return c;
    }

    void setC(int c) {
        Child::c = c;
    }
};

using namespace std;

int main0602() {
    Parent parent(4, 8);
    Child child;
    cout << parent.getA() << endl;
    cout << parent.getB() << endl;
    cout << child.getA() << endl;
    cout << child.getB() << endl;
    cout << child.getC() << endl;
    return 0;
}