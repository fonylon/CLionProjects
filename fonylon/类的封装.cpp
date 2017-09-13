//
// Created by 风林 on 2017/8/23.
//

#include <iostream>
#include "User.h"


using namespace std;

class Circle {
public:
    int getI() {
        return this->i;
    }

    void setI(int i) {
        this->i = i;
    }

private:
    int i;
    int j;
};

void printCircle(Circle &circle);

void printCircle(Circle *circle);

int main() {
    Circle circle;
    circle.setI(3);
    printCircle(&circle);
    printCircle(circle);
    cout << circle.getI() << endl;
    User user;
    user.setA(44);
    cout << user.getA() << endl;
}

void printCircle(Circle &circle) {
    circle.setI(6);
    cout << circle.getI() << endl;
}

void printCircle(Circle *circle) {
    cout << circle->getI() << endl;
}