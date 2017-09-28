//
// Created by 风林 on 2017/9/28.
//
#include <iostream>

using namespace std;

class Parent {
private:
    int a;
public:
    virtual void print() {
        cout << "2" << endl;
    }
};

class Child : public Parent {
public:
    void print() {
        cout << "1" << endl;
    }
};

int main() {
//    cout << sizeof(Parent) << endl;
//    cout << sizeof(Child) << endl;

    Child array[] = {Child(), Child(), Child()};
    Parent *parent;
    Child *child;
    parent = array;
    child = array;
    parent->print();
    child->print();
    return 0;
}
